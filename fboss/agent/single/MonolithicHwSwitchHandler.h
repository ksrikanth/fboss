// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#pragma once

#include "fboss/agent/FbossInit.h"
#include "fboss/agent/HwSwitchHandler.h"

namespace facebook::fboss {

class HwSwitch;
class Platform;
class TxPacket;
class SwSwitch;

class MonolithicHwSwitchHandler : public HwSwitchHandler {
 public:
  MonolithicHwSwitchHandler(
      Platform* platform,
      const SwitchID& switchId,
      const cfg::SwitchInfo& info,
      SwSwitch* sw);

  virtual ~MonolithicHwSwitchHandler() override = default;

  void exitFatal() const override;

  std::unique_ptr<TxPacket> allocatePacket(uint32_t size) const override;

  bool sendPacketOutOfPortAsync(
      std::unique_ptr<TxPacket> pkt,
      PortID portID,
      std::optional<uint8_t> queue = std::nullopt) noexcept override;

  bool sendPacketSwitchedSync(std::unique_ptr<TxPacket> pkt) noexcept override;

  bool sendPacketSwitchedAsync(std::unique_ptr<TxPacket> pkt) noexcept override;

  bool isValidStateUpdate(const StateDelta& delta) const override;

  void unregisterCallbacks() override;

  void gracefulExit() override;

  bool getAndClearNeighborHit(RouterID vrf, folly::IPAddress& ip) override;

  folly::dynamic toFollyDynamic() const override;

  std::optional<uint32_t> getHwLogicalPortId(PortID portID) const override;

  folly::F14FastMap<std::string, HwPortStats> getPortStats() const override;

  std::map<std::string, HwSysPortStats> getSysPortStats() const override;
  HwSwitchDropStats getSwitchDropStats() const override;

  void updateStats() override;

  void updateAllPhyInfo() override;
  std::map<PortID, phy::PhyInfo> getAllPhyInfo() const override;

  uint64_t getDeviceWatermarkBytes() const override;

  HwFlowletStats getHwFlowletStats() const override;

  HwSwitchFb303Stats* getSwitchStats() const override;

  void clearPortStats(
      const std::unique_ptr<std::vector<int32_t>>& ports) override;

  std::vector<phy::PrbsLaneStats> getPortAsicPrbsStats(PortID portId) override;

  void clearPortAsicPrbsStats(int32_t portId) override;

  std::vector<prbs::PrbsPolynomial> getPortPrbsPolynomials(
      int32_t portId) override;

  prbs::InterfacePrbsState getPortPrbsState(PortID portId) override;

  void switchRunStateChanged(SwitchRunState newState) override;

  std::vector<EcmpDetails> getAllEcmpDetails() const override;

  // platform access apis
  void onHwInitialized(HwSwitchCallback* callback) override;

  void onInitialConfigApplied(HwSwitchCallback* sw) override;

  void platformStop() override;

  std::shared_ptr<SwitchState> stateChanged(
      const StateDelta& delta,
      bool transaction) override;

  std::pair<fsdb::OperDelta, HwSwitchStateUpdateStatus> stateChanged(
      const fsdb::OperDelta& delta,
      bool transaction,
      const std::shared_ptr<SwitchState>& newState) override;

  bool transactionsSupported(
      std::optional<cfg::SdkVersion> sdkVersion) const override;

  /* TODO: remove this method */
  HwSwitch* getHwSwitch() const {
    return hw_;
  }

  /* TODO: remove this method */
  Platform* getPlatform() const {
    return platform_;
  }

  CpuPortStats getCpuPortStats(bool getIncrement) const override;

  std::map<PortID, FabricEndpoint> getFabricConnectivity() const override;

  FabricReachabilityStats getFabricReachabilityStats() const override;

  std::vector<PortID> getSwitchReachability(SwitchID switchId) const override;

  std::string getDebugDump() const override;

  void fetchL2Table(std::vector<L2EntryThrift>* l2Table) const override;

  std::string listObjects(const std::vector<HwObjectType>& types, bool cached)
      const override;

  bool needL2EntryForNeighbor(const cfg::SwitchConfig* config) const override;

  multiswitch::StateOperDelta getNextStateOperDelta(
      std::unique_ptr<multiswitch::StateOperDelta> prevOperResult,
      int64_t lastUpdateSeqNum) override;

  void notifyHwSwitchDisconnected() override;

  HwSwitchOperDeltaSyncState getHwSwitchOperDeltaSyncState() override {
    return HwSwitchOperDeltaSyncState::CONNECTED;
  }

  SwitchRunState getHwSwitchRunState() override;

  void cancelOperDeltaSync() override {}

 private:
  Platform* platform_;
  HwSwitch* hw_;
};

} // namespace facebook::fboss
