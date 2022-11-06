// Copyright 2004-present Facebook. All Rights Reserved.

#include "fboss/agent/hw/switch_asics/TomahawkAsic.h"

namespace facebook::fboss {

bool TomahawkAsic::isSupported(Feature feature) const {
  switch (feature) {
    case HwAsic::Feature::SPAN:
    case HwAsic::Feature::ERSPANv4:
    case HwAsic::Feature::SFLOWv4:
    case HwAsic::Feature::MPLS:
    case HwAsic::Feature::MPLS_ECMP:
    case HwAsic::Feature::HASH_FIELDS_CUSTOMIZATION:
    case HwAsic::Feature::ECN:
    case HwAsic::Feature::L3_QOS:
    case HwAsic::Feature::QCM:
    case HwAsic::Feature::SCHEDULER_PPS:
    case HwAsic::Feature::NEXTHOP_TTL_DECREMENT_DISABLE:
    case HwAsic::Feature::PORT_INTERFACE_TYPE:
    case HwAsic::Feature::DEBUG_COUNTER:
    case HwAsic::Feature::RESOURCE_USAGE_STATS:
    case HwAsic::Feature::OBJECT_KEY_CACHE:
    case HwAsic::Feature::ACL_COPY_TO_CPU:
    case HwAsic::Feature::HOSTTABLE:
    case HwAsic::Feature::PORT_TX_DISABLE:
    case HwAsic::Feature::OBM_COUNTERS:
    case HwAsic::Feature::BUFFER_POOL:
    case HwAsic::Feature::SFLOW_SAMPLING:
    case HwAsic::Feature::PTP_TC:
    case HwAsic::Feature::PENDING_L2_ENTRY:
    case HwAsic::Feature::SAI_ECN_WRED:
    case HwAsic::Feature::TELEMETRY_AND_MONITORING:
    case HwAsic::Feature::MAC_AGING:
    case HwAsic::Feature::REMOVE_PORTS_FOR_COLDBOOT:
    case HwAsic::Feature::EGRESS_MIRRORING:
    case HwAsic::Feature::EGRESS_SFLOW:
    case HwAsic::Feature::DEFAULT_VLAN:
    case HwAsic::Feature::L2_LEARNING:
    case HwAsic::Feature::SAI_ACL_ENTRY_SRC_PORT_QUALIFIER:
    case HwAsic::Feature::TRAFFIC_HASHING:
    case HwAsic::Feature::ACL_TABLE_GROUP:
    case HwAsic::Feature::CPU_PORT:
    case HwAsic::Feature::VRF:
    case HwAsic::Feature::SAI_HASH_FIELDS_CLEAR_BEFORE_SET:
    case HwAsic::Feature::SWITCH_ATTR_INGRESS_ACL:
    case HwAsic::Feature::MULTIPLE_ACL_TABLES:
    case HwAsic::Feature::BRIDGE_PORT_8021Q:
    case HwAsic::Feature::SAI_WEIGHTED_NEXTHOPGROUP_MEMBER:
    case HwAsic::Feature::SAI_LAG_HASH:
    case HwAsic::Feature::SAI_FEC_COUNTERS:
    case HwAsic::Feature::PORT_EYE_VALUES:
    case HwAsic::Feature::SAI_PORT_ERR_STATUS:
    case HwAsic::Feature::ROUTE_PROGRAMMING:
    case HwAsic::Feature::ECMP_HASH_V4:
    case HwAsic::Feature::ECMP_HASH_V6:
    case HwAsic::Feature::FEC_CORRECTED_BITS:
    case HwAsic::Feature::MEDIA_TYPE:
    case HwAsic::Feature::FEC:
    case HwAsic::Feature::RX_FREQUENCY_PPM:
    case HwAsic::Feature::ECMP_MEMBER_WIDTH_INTROSPECTION:
    case HwAsic::Feature::SAI_MPLS_QOS:
    case HwAsic::Feature::QOS_MAP_GLOBAL:
      return true;

    case HwAsic::Feature::HOSTTABLE_FOR_HOSTROUTES:
    case HwAsic::Feature::ERSPANv6:
    case HwAsic::Feature::SFLOWv6:
    case HwAsic::Feature::SMAC_EQUALS_DMAC_CHECK_ENABLED:
    case HwAsic::Feature::PORT_TTL_DECREMENT_DISABLE:
    case HwAsic::Feature::WEIGHTED_NEXTHOPGROUP_MEMBER:
    case HwAsic::Feature::HSDK:
    case HwAsic::Feature::L3_EGRESS_MODE_AUTO_ENABLED:
    case HwAsic::Feature::PKTIO:
    case HwAsic::Feature::INGRESS_FIELD_PROCESSOR_FLEX_COUNTER:
    case HwAsic::Feature::ZERO_SDK_WRITE_WARMBOOT:
    case HwAsic::Feature::MIRROR_PACKET_TRUNCATION:
    case HwAsic::Feature::PTP_TC_PCS:
    case HwAsic::Feature::EGRESS_QUEUE_FLEX_COUNTER:
    case HwAsic::Feature::PFC:
    case HwAsic::Feature::INGRESS_L3_INTERFACE:
    case HwAsic::Feature::NON_UNICAST_HASH:
    case HwAsic::Feature::DETAILED_L2_UPDATE:
    case HwAsic::Feature::COUNTER_REFRESH_INTERVAL:
    case HwAsic::Feature::WIDE_ECMP:
    case HwAsic::Feature::ALPM_ROUTE_PROJECTION:
    case HwAsic::Feature::SAI_PORT_SPEED_CHANGE:
    case HwAsic::Feature::SFLOW_SHIM_VERSION_FIELD:
    case HwAsic::Feature::MACSEC:
    case HwAsic::Feature::EMPTY_ACL_MATCHER:
    case HwAsic::Feature::SAI_PORT_SERDES_FIELDS_RESET:
    case HwAsic::Feature::ROUTE_COUNTERS:
    case HwAsic::Feature::ROUTE_FLEX_COUNTERS:
    case HwAsic::Feature::FEC_DIAG_COUNTERS:
    case HwAsic::Feature::SAI_ACL_TABLE_UPDATE:
    case HwAsic::Feature::SAI_MPLS_TTL_1_TRAP:
    case HwAsic::Feature::SAI_MPLS_LABEL_LOOKUP_FAIL_COUNTER:
    case HwAsic::Feature::PMD_RX_LOCK_STATUS:
    case HwAsic::Feature::PMD_RX_SIGNAL_DETECT:
    case HwAsic::Feature::EXACT_MATCH:
    case HwAsic::Feature::FABRIC_PORTS:
    case HwAsic::Feature::FABRIC_PORT_MTU:
    case HwAsic::Feature::SAI_FIRMWARE_PATH:
    case HwAsic::Feature::EXTENDED_FEC:
    case HwAsic::Feature::LINK_TRAINING:
    case HwAsic::Feature::SAI_RX_REASON_COUNTER:
    case HwAsic::Feature::SAI_MPLS_INSEGMENT:
    case HwAsic::Feature::RESERVED_ENCAP_INDEX_RANGE:
    case HwAsic::Feature::VOQ:
    case HwAsic::Feature::RECYCLE_PORTS:
    case HwAsic::Feature::XPHY_PORT_STATE_TOGGLE:
    case HwAsic::Feature::SAI_PORT_GET_PMD_LANES:
      return false;
  }
  return false;
}

int TomahawkAsic::getDefaultNumPortQueues(cfg::StreamType streamType, bool cpu)
    const {
  switch (streamType) {
    case cfg::StreamType::UNICAST:
      if (cpu) {
        break;
      }
      return 8;
    case cfg::StreamType::MULTICAST:
      // CPU on TH has 48 queues, but we restrict ourselves to first 10
      return 10;
    case cfg::StreamType::ALL:
    case cfg::StreamType::FABRIC_TX:
      break;
  }
  throw FbossError(
      "Unexpected, stream: ", streamType, " cpu: ", cpu, "combination");
}
} // namespace facebook::fboss
