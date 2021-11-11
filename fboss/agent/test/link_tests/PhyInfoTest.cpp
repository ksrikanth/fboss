// (c) Facebook, Inc. and its affiliates. Confidential and proprietary.

#include <gtest/gtest.h>
#include <chrono>
#include "fboss/agent/PlatformPort.h"
#include "fboss/agent/SwSwitch.h"
#include "fboss/agent/test/link_tests/LinkTest.h"
#include "fboss/lib/CommonUtils.h"
#include "fboss/lib/phy/PhyInterfaceHandler.h"
#include "fboss/lib/phy/gen-cpp2/phy_types.h"
#include "fboss/lib/thrift_service_client/ThriftServiceClient.h"
#include "fboss/qsfp_service/lib/QsfpCache.h"

using namespace ::testing;
using namespace facebook::fboss;
using namespace std::chrono_literals;

static constexpr int kSecondsBetweenSnapshots = 20;
// When we switch to use qsfp_service to collect stats(PhyInfo), default stats
// collection frequency is 60s. Give the maximum check time 5x24=120s here.
static constexpr auto kSecondsBetweenXphyInfoCollectionCheck = 5s;
static constexpr auto kMaxNumXphyInfoCollectionCheck = 24;

namespace {
void validatePhyInfo(
    const phy::PhyInfo& prev,
    const phy::PhyInfo& curr,
    phy::DataPlanePhyChipType chipType) {
  // Assert that a phy info update happened
  EXPECT_TRUE(*curr.timeCollected_ref() > *prev.timeCollected_ref());
  EXPECT_EQ(*curr.phyChip_ref()->type_ref(), chipType);
  EXPECT_EQ(*prev.phyChip_ref()->type_ref(), chipType);
  if (chipType == phy::DataPlanePhyChipType::IPHY) {
    EXPECT_EQ(curr.linkState_ref().value_or({}), true);
    EXPECT_EQ(prev.linkState_ref().value_or({}), true);
  }
  // Assert that fec uncorrectable error count didn't increase
  auto prevRsFecInfo =
      prev.line_ref()->pcs_ref().value_or({}).rsFec_ref().value_or({});
  auto currRsFecInfo =
      curr.line_ref()->pcs_ref().value_or({}).rsFec_ref().value_or({});
  // Expect 0 Uncorrected codewords and >=0 corrected codewords count
  EXPECT_TRUE(
      *prevRsFecInfo.uncorrectedCodewords_ref() ==
      *currRsFecInfo.uncorrectedCodewords_ref());
  EXPECT_TRUE(
      *prevRsFecInfo.correctedCodewords_ref() <=
      *currRsFecInfo.correctedCodewords_ref());
}

// This function supports both using qsfp_service thrift api and
// PhyInterfaceHandler from wedge_agent directly to get the XphyInfo for a
// specific port.
// TODO(joseph5wu) Will remove the way of using PhyInterfaceHandler to get
// xphy info once we fully switch to use qsfp_service to program xphy.
std::optional<phy::PhyInfo> getXphyInfo(
    PortID portID,
    PhyInterfaceHandler* phyIntHandler) {
  std::optional<phy::PhyInfo> phyInfo;
  if (FLAGS_skip_xphy_programming) {
    // thrift can't support return optional
    try {
      phy::PhyInfo thriftPhyInfo;
      auto qsfpServiceClient = utils::createQsfpServiceClient();
      qsfpServiceClient->sync_getXphyInfo(thriftPhyInfo, portID);
      phyInfo.emplace(thriftPhyInfo);
    } catch (const thrift::FbossBaseError& /* err */) {
      // If there's no phyInfo collected, it will throw fboss error.
    }
  } else {
    phyInfo = phyIntHandler->getXphyInfo(portID);
  }
  return phyInfo;
}
} // namespace

TEST_F(LinkTest, iPhyInfoTest) {
  auto cabledPorts = getCabledPorts();
  std::map<PortID, const phy::PhyInfo> phyInfoBefore;

  auto phyInfoReady = [&phyInfoBefore, &cabledPorts, this]() {
    phyInfoBefore = sw()->getIPhyInfo(cabledPorts);
    for (const auto& port : cabledPorts) {
      if (phyInfoBefore.find(port) == phyInfoBefore.end() ||
          *(phyInfoBefore[port].timeCollected_ref()) == 0 ||
          !phyInfoBefore[port].linkState_ref().value_or({})) {
        return false;
      }
    }
    return true;
  };
  // Make sure the stats thread had a chance to update the iphy data before
  // starting the test
  checkWithRetry(
      phyInfoReady,
      20 /* retries */,
      std::chrono::milliseconds(1000) /* msBetweenRetry */);

  std::map<PortID, const phy::PhyInfo> phyInfoAfter;
  auto phyInfoUpdated = [&phyInfoBefore, &cabledPorts, &phyInfoAfter, this]() {
    phyInfoAfter = sw()->getIPhyInfo(cabledPorts);
    for (const auto& port : cabledPorts) {
      if (phyInfoAfter.find(port) == phyInfoAfter.end() ||
          *(phyInfoAfter[port].timeCollected_ref()) -
                  *(phyInfoBefore[port].timeCollected_ref()) <
              20) {
        return false;
      }
    }
    return true;
  };
  // Monitor the link for 20 seconds and collect phy stats
  checkWithRetry(
      phyInfoUpdated,
      30 /* retries */,
      std::chrono::milliseconds(1000) /* msBetweenRetry */);

  // Validate PhyInfo
  for (const auto& port : cabledPorts) {
    validatePhyInfo(
        phyInfoBefore[port],
        phyInfoAfter[port],
        phy::DataPlanePhyChipType::IPHY);
  }
}

TEST_F(LinkTest, xPhyInfoTest) {
  auto cabledPorts = getCabledPorts();
  std::map<PortID, const phy::PhyInfo> phyInfoBefore;

  // Give Xphy ports some time to come up
  // sleep override
  std::this_thread::sleep_for(10s);

  auto phyInfoReady =
      [&phyInfoBefore, &cabledPorts, this](bool logErrors = false) {
        for (const auto& port : cabledPorts) {
          if (phyInfoBefore.count(port)) {
            continue;
          }
          auto phyInfo =
              getXphyInfo(port, sw()->getPlatform()->getPhyInterfaceHandler());
          if (phyInfo.has_value()) {
            phyInfoBefore.emplace(port, *phyInfo);
          } else {
            if (logErrors) {
              XLOG(ERR) << getPortName(port) << " has no xphy info.";
            }
            return false;
          }
        }

        return true;
      };

  // Wait for at least 1 snapshot from every active port before we start
  try {
    checkWithRetry(
        phyInfoReady,
        kMaxNumXphyInfoCollectionCheck /* retries */,
        kSecondsBetweenXphyInfoCollectionCheck /* retry period */);
  } catch (...) {
    XLOG(ERR) << "Failed to wait for all ports to have snapshots:";
    phyInfoReady(true);
    throw;
  }

  std::map<PortID, const phy::PhyInfo> phyInfoAfter;
  auto phyInfoUpdated = [&phyInfoBefore, &cabledPorts, &phyInfoAfter, this](
                            bool logErrors = false) {
    for (const auto& port : cabledPorts) {
      if (phyInfoAfter.count(port)) {
        continue;
      }

      auto phyInfo =
          getXphyInfo(port, sw()->getPlatform()->getPhyInterfaceHandler());
      if (phyInfo.has_value() &&
          phyInfo->get_timeCollected() -
                  phyInfoBefore[port].get_timeCollected() >=
              kSecondsBetweenSnapshots) {
        phyInfoAfter.emplace(port, *phyInfo);
      } else {
        if (logErrors) {
          XLOG(ERR) << getPortName(port) << " has no updated xphy info.";
        }
        return false;
      }
    }
    return true;
  };

  // Wait until every active port have an updated snapshot
  // sleep override
  std::this_thread::sleep_for(std::chrono::seconds(kSecondsBetweenSnapshots));

  try {
    checkWithRetry(
        phyInfoUpdated,
        kMaxNumXphyInfoCollectionCheck /* retries */,
        kSecondsBetweenXphyInfoCollectionCheck /* retry period */);
  } catch (...) {
    XLOG(ERR) << "Failed to wait for all ports to have snapshot updates:";
    phyInfoUpdated(true);
    throw;
  }

  // Validate PhyInfo
  for (const auto& port : cabledPorts) {
    validatePhyInfo(
        phyInfoBefore[port],
        phyInfoAfter[port],
        phy::DataPlanePhyChipType::XPHY);
  }
}
