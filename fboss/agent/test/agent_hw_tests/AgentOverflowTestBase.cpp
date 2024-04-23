// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#include "fboss/agent/TxPacket.h"
#include "fboss/agent/hw/test/ProdConfigFactory.h"
#include "fboss/agent/test/AgentHwTest.h"
#include "fboss/agent/test/utils/AsicUtils.h"
#include "fboss/agent/test/utils/ConfigUtils.h"
#include "fboss/agent/test/utils/CoppTestUtils.h"
#include "fboss/agent/test/utils/InvariantTestUtils.h"
#include "fboss/agent/test/utils/PacketSnooper.h"
#include "fboss/agent/test/utils/PacketTestUtils.h"

namespace {
constexpr auto kTxRxThresholdMs = 2000;
constexpr auto kEcmpWidth = 4;
} // namespace

namespace facebook::fboss {

class AgentOverflowTestBase : public AgentHwTest {
 protected:
  cfg::SwitchConfig initialConfig(
      const AgentEnsemble& ensemble) const override {
    // Since we run inavriant tests based on switch role, we just pick the
    // most common switch role (i.e. rsw) for convenience of testing.
    // Not intended to extend coverage for every platform
    auto config = utility::createProdRswConfig(
        utility::getFirstAsic(ensemble.getSw()),
        ensemble.getSw()->getPlatformType(),
        ensemble.getSw()->getPlatformMapping(),
        ensemble.masterLogicalPortIds(),
        ensemble.isSai());
    return config;
  }
  void startPacketTxRxVerify() {
    CHECK(!packetRxVerifyRunning_);
    packetRxVerifyRunning_ = true;
    auto vlanId = utility::firstVlanID(getProgrammedState());
    auto intfMac = utility::getFirstInterfaceMac(getProgrammedState());
    auto dstIp = folly::IPAddress::createNetwork(
                     getSw()->getConfig().interfaces()[0].ipAddresses()[0])
                     .first;
    auto sendBgpPktToMe = [=, this]() {
      utility::sendTcpPkts(
          getSw(),
          1 /*numPktsToSend*/,
          vlanId,
          intfMac,
          dstIp,
          utility::kNonSpecialPort1,
          utility::kBgpPort,
          // tests using invariants need to ensure
          // that they don't step over the invariant tests
          // hence explicitly pick a port to send traffic from
          // else can result in test failures
          getDownlinkPort());
    };
    packetRxVerifyThread_ =
        std::make_unique<std::thread>([this, sendBgpPktToMe]() {
          utility::SwSwitchPacketSnooper snooper(
              getSw(), "AgentOverflowTestBase snooper");
          initThread("PacketRxTxVerify");
          while (packetRxVerifyRunning_) {
            auto startTime(std::chrono::steady_clock::now());
            sendBgpPktToMe();
            snooper.waitForPacket(5);
            std::chrono::duration<double, std::milli> durationMillseconds =
                std::chrono::steady_clock::now() - startTime;
            if (durationMillseconds.count() > kTxRxThresholdMs) {
              throw FbossError(
                  "Took more than : ", kTxRxThresholdMs, " for TX, RX cycle");
            }
          }
        });
  }
  void stopPacketTxRxVerify() {
    packetRxVerifyRunning_ = false;
    packetRxVerifyThread_->join();
    packetRxVerifyThread_.reset();
    // Wait slightly more than  kTxRxThresholdMs  so as to drain any inflight
    // traffic from packetTxRxThread send loop. Else the infligh traffic can
    // effect subsequent verifications by bumping up counters
    sleep(kTxRxThresholdMs / 1000 + 1);
  }

  PortID getDownlinkPort() {
    // pick the first downlink in the list
    return utility::getAllUplinkDownlinkPorts(
               getSw()->getPlatformType(),
               getSw()->getConfig(),
               kEcmpWidth,
               /* TODO: For RTSW invariant enable mmu lossless */
               false /* mmu_lossless*/)
        .second[0];
  }

  std::vector<PortID> getUplinkPorts() {
    // pick the first downlink in the list
    return utility::getAllUplinkDownlinkPorts(
               getSw()->getPlatformType(),
               getSw()->getConfig(),
               kEcmpWidth,
               /* TODO: For RTSW invariant enable mmu lossless */
               false /* mmu_lossless*/)
        .first;
  }

  void verifyInvariants() {
    utility::verifySafeDiagCmds(
        getAgentEnsemble(), utility::getFirstAsic(getSw()));
    // TODO: Iterate all ASICs and verify copp on the port of each ASIC.
    utility::verifyCopp(
        getSw(), utility::getFirstSwitchId(getSw()), getDownlinkPort());
  }

 private:
  std::atomic<bool> packetRxVerifyRunning_{false};
  std::unique_ptr<std::thread> packetRxVerifyThread_;
};
} // namespace facebook::fboss
