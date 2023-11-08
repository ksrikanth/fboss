/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#pragma once

#include "fboss/agent/gen-cpp2/switch_config_types.h"
#include "fboss/agent/hw/gen-cpp2/hardware_stats_types.h"
#include "fboss/agent/hw/switch_asics/HwAsic.h"
#include "fboss/agent/hw/test/HwSwitchEnsemble.h"
#include "fboss/agent/state/PortDescriptor.h"
#include "fboss/agent/state/RouteNextHop.h"
#include "fboss/agent/types.h"
#include "folly/MacAddress.h"

#include <folly/gen/Base.h>
#include <optional>
#include <vector>

DECLARE_string(load_balance_traffic_src);

namespace facebook::fboss {
class HwSwitch;
class Platform;
class SwitchState;
class LoadBalancer;
class HwSwitchEnsemble;
class SwitchIdScopeResolver;

} // namespace facebook::fboss

namespace facebook::fboss::utility {

inline const std::string kUdfHashGroupName("dstQueuePair");
inline const std::string kUdfRoceOpcodeAclGroupName("roceOpcode");
inline const std::string kUdfPktMatcherName("l4UdpRoce");
inline const int kUdfHashStartOffsetInBytes(13);
inline const int kUdfAclRoceOpcodeStartOffsetInBytes(8);
inline const int kUdfHashFieldSizeInBytes(3);
inline const int kUdfAclRoceOpcodeFieldSizeInBytes(1);
inline const int kUdfL4DstPort(4791);
inline const int kRandomUdfL4SrcPort(62946);
inline const int kUdfRoceOpcode(11);
inline const int kScalingFactor(100);
inline const int kLoadWeight(70);
inline const int kQueueWeight(30);

cfg::LoadBalancer getEcmpHalfHashConfig(const HwAsic& asic);
cfg::LoadBalancer getEcmpFullHashConfig(const HwAsic& asic);
cfg::LoadBalancer getEcmpFullUdfHashConfig(const HwAsic& asic);
std::vector<cfg::LoadBalancer> getEcmpFullTrunkHalfHashConfig(
    const HwAsic& asic);
std::vector<cfg::LoadBalancer> getEcmpHalfTrunkFullHashConfig(
    const HwAsic& asic);
std::vector<cfg::LoadBalancer> getEcmpFullTrunkFullHashConfig(
    const HwAsic& asic);

std::shared_ptr<SwitchState> setLoadBalancer(
    const Platform* platform,
    const std::shared_ptr<SwitchState>& inputState,
    const cfg::LoadBalancer& loadBalancer,
    const SwitchIdScopeResolver& resolver);

std::shared_ptr<SwitchState> addLoadBalancers(
    const Platform* platform,
    const std::shared_ptr<SwitchState>& inputState,
    const std::vector<cfg::LoadBalancer>& loadBalancers,
    const SwitchIdScopeResolver& resolver);

void pumpTraffic(
    bool isV6,
    HwSwitch* hw,
    folly::MacAddress dstMac,
    std::optional<VlanID> vlan,
    std::optional<PortID> frontPanelPortToLoopTraffic = std::nullopt,
    int hopLimit = 255,
    std::optional<folly::MacAddress> srcMac = std::nullopt);

size_t pumpRoCETraffic(
    bool isV6,
    HwSwitch* hw,
    folly::MacAddress dstMac,
    std::optional<VlanID> vlan,
    std::optional<PortID> frontPanelPortToLoopTraffic,
    int roceDestPort = kUdfL4DstPort, /* RoCE fixed dst port */
    int hopLimit = 255,
    std::optional<folly::MacAddress> srcMacAddr = std::nullopt,
    int packetCount = 50000);

void pumpTrafficWithSourceFile(
    HwSwitch* hw,
    folly::MacAddress dstMac,
    std::optional<VlanID> vlan,
    std::optional<PortID> frontPanelPortToLoopTraffic = std::nullopt,
    int hopLimit = 255,
    std::optional<folly::MacAddress> srcMacAddr = std::nullopt);

void pumpTraffic(
    HwSwitch* hw,
    folly::MacAddress dstMac,
    std::vector<folly::IPAddress> srcIp,
    std::vector<folly::IPAddress> dstIp,
    uint16_t srcPort,
    uint16_t dstPort,
    uint8_t streams,
    std::optional<VlanID> vlan,
    std::optional<PortID> frontPanelPortToLoopTraffic = std::nullopt,
    int hopLimit = 255,
    std::optional<folly::MacAddress> srcMac = std::nullopt,
    int numPkts = 1000);

void pumpDeterministicRandomTraffic(
    bool isV6,
    HwSwitch* hw,
    folly::MacAddress intfMac,
    VlanID vlan,
    std::optional<PortID> frontPanelPortToLoopTraffic = std::nullopt,
    int hopLimit = 255);

void pumpMplsTraffic(
    bool isV6,
    HwSwitch* hw,
    uint32_t label,
    folly::MacAddress intfMac,
    VlanID vlanId,
    std::optional<PortID> frontPanelPortToLoopTraffic = std::nullopt);

template <typename PortIdT, typename PortStatsT>
bool isLoadBalancedImpl(
    const std::map<PortIdT, PortStatsT>& portIdToStats,
    const std::vector<NextHopWeight>& weights,
    int maxDeviationPct,
    bool noTrafficOk);

template <typename PortIdT, typename PortStatsT>
bool isLoadBalanced(
    const std::map<PortIdT, PortStatsT>& portStats,
    const std::vector<NextHopWeight>& weights,
    int maxDeviationPct,
    /* Flag to control whether having no traffic on a link is ok */
    bool noTrafficOk = false) {
  return isLoadBalancedImpl(portStats, weights, maxDeviationPct, noTrafficOk);
}

template <typename PortStatsT>
bool isLoadBalanced(
    const std::map<std::string, PortStatsT>& portStats,
    const std::vector<NextHopWeight>& weights,
    int maxDeviationPct,
    /* Flag to control whether having no traffic on a link is ok */
    bool noTrafficOk = false) {
  return isLoadBalancedImpl(portStats, weights, maxDeviationPct, noTrafficOk);
}

template <typename PortIdT, typename PortStatsT>
bool isLoadBalanced(
    const std::vector<PortDescriptor>& ecmpPorts,
    const std::vector<NextHopWeight>& weights,
    const std::function<std::map<PortIdT, PortStatsT>(
        const std::vector<PortIdT>&)>& getPortStatsFn,
    int maxDeviationPct,
    bool noTrafficOk = false) {
  auto portIDs =
      folly::gen::from(ecmpPorts) | folly::gen::map([](const auto& portDesc) {
        if constexpr (std::is_same_v<PortStatsT, HwPortStats>) {
          return portDesc.phyPortID();
        } else if constexpr (std::is_same_v<PortStatsT, HwSysPortStats>) {
          return portDesc.sysPortID();
        }
        throw FbossError("Unsupported port stats type in isLoadBalanced");
      }) |
      folly::gen::as<std::vector<PortIdT>>();
  auto portIdToStats = getPortStatsFn(portIDs);
  return isLoadBalanced(portIdToStats, weights, maxDeviationPct, noTrafficOk);
}

template <typename PortIdT, typename PortStatsT>
bool isLoadBalanced(
    HwSwitchEnsemble* hwSwitchEnsemble,
    const std::vector<PortDescriptor>& ecmpPorts,
    const std::vector<NextHopWeight>& weights,
    int maxDeviationPct,
    /* Flag to control whether having no traffic on a link is ok */
    bool noTrafficOk = false) {
  auto getPortStatsFn = [&](const std::vector<PortIdT>& portIds)
      -> std::map<PortIdT, PortStatsT> {
    return hwSwitchEnsemble->getLatestPortStats(portIds);
  };
  return isLoadBalanced<PortIdT, PortStatsT>(
      ecmpPorts, weights, getPortStatsFn, maxDeviationPct, noTrafficOk);
}

template <typename PortIdT, typename PortStatsT>
bool isLoadBalanced(
    HwSwitchEnsemble* hwSwitchEnsemble,
    const std::vector<PortDescriptor>& ecmpPorts,
    int maxDeviationPct) {
  return isLoadBalanced<PortIdT, PortStatsT>(
      hwSwitchEnsemble,
      ecmpPorts,
      std::vector<NextHopWeight>(),
      maxDeviationPct);
}

template <typename PortIdT, typename PortStatsT>
bool isLoadBalanced(
    const std::map<PortIdT, PortStatsT>& portStats,
    int maxDeviationPct) {
  return isLoadBalanced(
      portStats, std::vector<NextHopWeight>(), maxDeviationPct);
}

template <typename PortStatsT>
bool isLoadBalanced(
    const std::map<std::string, PortStatsT>& portStats,
    int maxDeviationPct) {
  return isLoadBalanced(
      portStats, std::vector<NextHopWeight>(), maxDeviationPct);
}

void pumpTrafficAndVerifyLoadBalanced(
    std::function<void()> pumpTraffic,
    std::function<void()> clearPortStats,
    std::function<bool()> isLoadBalanced,
    bool loadBalanceExpected = true);

cfg::UdfConfig addUdfHashConfig();
cfg::UdfConfig addUdfAclConfig();

bool isHwDeterministicSeed(
    HwSwitch* hwSwitch,
    const std::shared_ptr<SwitchState>& state,
    LoadBalancerID id);

cfg::FlowletSwitchingConfig getDefaultFlowletSwitchingConfig();
void addFlowletAcl(cfg::SwitchConfig& cfg);
void addFlowletConfigs(
    cfg::SwitchConfig& cfg,
    const std::vector<PortID>& ports);

} // namespace facebook::fboss::utility
