/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/hw/test/dataplane_tests/HwTestDscpMarkingUtils.h"

#include "fboss/agent/hw/test/ConfigFactory.h"
#include "fboss/agent/hw/test/HwTestAclUtils.h"
#include "fboss/agent/test/utils/OlympicTestUtils.h"
#include "fboss/agent/test/utils/TrafficPolicyTestUtils.h"

#include <string>

namespace facebook::fboss::utility {

// 53: DNS, 88: Kerberos, 123: NTP, 546/547: DHCPV6, 514: syslog, 636: LDAP

const std::vector<uint32_t>& kTcpPorts() {
  static const std::vector<uint32_t> tcpPorts = {53, 88, 123, 636};

  return tcpPorts;
}

const std::vector<uint32_t>& kUdpPorts() {
  static const std::vector<uint32_t> udpPorts = {53, 88, 123, 546, 547, 514};

  return udpPorts;
}

std::string getDscpAclTableName() {
  return "acl-table-dscp";
}

std::string kDscpCounterAclName() {
  return "dscp_counter_acl";
}

std::string kCounterName() {
  return "dscp_counter";
}

uint8_t kIcpDscp(const HwAsic* hwAsic) {
  return utility::kOlympicQueueToDscp(hwAsic)
      .at(utility::getOlympicQueueId(utility::OlympicQueueType::ICP))
      .front();
}

std::string
getDscpAclName(IP_PROTO proto, std::string direction, uint32_t port) {
  return folly::to<std::string>(
      "dscp-mark-for-proto-",
      static_cast<int>(proto),
      "-L4-",
      direction,
      "-port-",
      port);
}

void addDscpMarkingAclsHelper(
    cfg::SwitchConfig* config,
    IP_PROTO proto,
    const std::vector<uint32_t>& ports,
    const HwAsic* hwAsic,
    bool isSai) {
  for (auto port : ports) {
    auto l4SrcPortAclName = getDscpAclName(proto, "src", port);
    utility::addL4SrcPortAclToCfg(config, l4SrcPortAclName, proto, port);
    utility::addSetDscpAndEgressQueueActionToCfg(
        config,
        l4SrcPortAclName,
        kIcpDscp(hwAsic),
        utility::getOlympicQueueId(utility::OlympicQueueType::ICP),
        isSai);

    auto l4DstPortAclName = getDscpAclName(proto, "dst", port);
    utility::addL4DstPortAclToCfg(config, l4DstPortAclName, proto, port);
    utility::addSetDscpAndEgressQueueActionToCfg(
        config,
        l4DstPortAclName,
        kIcpDscp(hwAsic),
        utility::getOlympicQueueId(utility::OlympicQueueType::ICP),
        isSai);
  }
}

void addDscpMarkingAcls(
    cfg::SwitchConfig* config,
    const HwAsic* hwAsic,
    bool isSai) {
  addDscpMarkingAclsHelper(
      config, IP_PROTO::IP_PROTO_UDP, kUdpPorts(), hwAsic, isSai);
  addDscpMarkingAclsHelper(
      config, IP_PROTO::IP_PROTO_TCP, kTcpPorts(), hwAsic, isSai);
}

void addDscpCounterAcl(cfg::SwitchConfig* config, const HwAsic* hwAsic) {
  // Create ACL to count the number of packets with DSCP == ICP
  utility::addDscpAclToCfg(
      config, kDscpCounterAclName(), utility::kIcpDscp(hwAsic));
  std::vector<cfg::CounterType> counterTypes{cfg::CounterType::PACKETS};
  utility::addTrafficCounter(config, kCounterName(), counterTypes);
  cfg::MatchAction matchAction = cfg::MatchAction();
  matchAction.counter() = kCounterName();
  utility::addMatcher(config, kDscpCounterAclName(), matchAction);
}

void delDscpMarkingAclMatchers(
    cfg::SwitchConfig* config,
    IP_PROTO proto,
    const std::vector<uint32_t>& ports) {
  for (auto port : ports) {
    auto l4SrcPortAclName = getDscpAclName(proto, "src", port);
    utility::delMatcher(config, l4SrcPortAclName);

    auto l4DstPortAclName = getDscpAclName(proto, "dst", port);
    utility::delMatcher(config, l4DstPortAclName);
  }
}

void delDscpMatchers(cfg::SwitchConfig* config) {
  utility::delAclStat(config, kDscpCounterAclName(), kCounterName());
  delDscpMarkingAclMatchers(config, IP_PROTO::IP_PROTO_UDP, kUdpPorts());
  delDscpMarkingAclMatchers(config, IP_PROTO::IP_PROTO_TCP, kTcpPorts());
}

void addDscpMarkingAclsTableHelper(
    cfg::SwitchConfig* config,
    IP_PROTO proto,
    const std::vector<uint32_t>& ports,
    const std::string& aclTableName,
    const HwAsic* hwAsic,
    bool isSai) {
  for (auto port : ports) {
    auto l4SrcPortAclName = getDscpAclName(proto, "src", port);
    auto dscpSrcMarkingAcl = utility::addAcl(
        config, l4SrcPortAclName, cfg::AclActionType::PERMIT, aclTableName);
    dscpSrcMarkingAcl->proto() = static_cast<int>(proto);
    dscpSrcMarkingAcl->l4SrcPort() = port;
    utility::addSetDscpAndEgressQueueActionToCfg(
        config,
        l4SrcPortAclName,
        kIcpDscp(hwAsic),
        utility::getOlympicQueueId(utility::OlympicQueueType::ICP),
        isSai);

    auto l4DstPortAclName = getDscpAclName(proto, "dst", port);
    auto dscpDstMarkingAcl = utility::addAcl(
        config, l4DstPortAclName, cfg::AclActionType::PERMIT, aclTableName);
    dscpDstMarkingAcl->proto() = static_cast<int>(proto);
    dscpDstMarkingAcl->l4DstPort() = port;
    utility::addSetDscpAndEgressQueueActionToCfg(
        config,
        l4DstPortAclName,
        kIcpDscp(hwAsic),
        utility::getOlympicQueueId(utility::OlympicQueueType::ICP),
        isSai);
  }
}

void addDscpMarkingAclTable(
    cfg::SwitchConfig* config,
    const std::string& aclTableName,
    const HwAsic* hwAsic,
    bool isSai) {
  addDscpMarkingAclsTableHelper(
      config, IP_PROTO::IP_PROTO_UDP, kUdpPorts(), aclTableName, hwAsic, isSai);
  addDscpMarkingAclsTableHelper(
      config, IP_PROTO::IP_PROTO_TCP, kTcpPorts(), aclTableName, hwAsic, isSai);
}

void addDscpAclEntryWithCounter(
    cfg::SwitchConfig* config,
    const std::string& aclTableName,
    const HwAsic* hwAsic,
    bool isSai) {
  std::vector<cfg::CounterType> counterTypes{cfg::CounterType::PACKETS};
  utility::addTrafficCounter(config, kCounterName(), counterTypes);
  auto* dscpAcl = utility::addAcl(
      config, kDscpCounterAclName(), cfg::AclActionType::PERMIT, aclTableName);
  dscpAcl->dscp() = utility::kIcpDscp(hwAsic);

  utility::addAclStat(
      config, kDscpCounterAclName(), kCounterName(), counterTypes);
  addDscpMarkingAclTable(config, aclTableName, hwAsic, isSai);
}

// Utility to add ICP Marking ACL table to a multi acl table group
void addDscpAclTable(
    cfg::SwitchConfig* config,
    int16_t priority,
    bool addAllQualifiers,
    const HwAsic* hwAsic,
    bool isSai) {
  std::vector<cfg::AclTableQualifier> qualifiers = {
      cfg::AclTableQualifier::L4_SRC_PORT,
      cfg::AclTableQualifier::L4_DST_PORT,
      cfg::AclTableQualifier::IP_PROTOCOL,
      cfg::AclTableQualifier::ICMPV4_TYPE,
      cfg::AclTableQualifier::ICMPV4_CODE,
      cfg::AclTableQualifier::ICMPV6_TYPE,
      cfg::AclTableQualifier::ICMPV6_CODE,
      cfg::AclTableQualifier::DSCP};
  if (addAllQualifiers) {
    // Add the extra qualifiers needed for Cisco Key profile
    qualifiers.push_back(cfg::AclTableQualifier::TTL);
    qualifiers.push_back(cfg::AclTableQualifier::DSCP);
  }
  utility::addAclTable(
      config,
      getDscpAclTableName(),
      priority,
      {cfg::AclTableActionType::PACKET_ACTION,
       cfg::AclTableActionType::COUNTER,
       cfg::AclTableActionType::SET_TC,
       cfg::AclTableActionType::SET_DSCP},
      qualifiers);

  addDscpAclEntryWithCounter(config, getDscpAclTableName(), hwAsic, isSai);
}
} // namespace facebook::fboss::utility
