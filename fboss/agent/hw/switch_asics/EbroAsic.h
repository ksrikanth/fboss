// Copyright 2004-present Facebook. All Rights Reserved.

#pragma once

#include "fboss/agent/FbossError.h"
#include "fboss/agent/hw/switch_asics/TajoAsic.h"

namespace facebook::fboss {

class EbroAsic : public TajoAsic {
 public:
  EbroAsic(cfg::SwitchType type, std::optional<int64_t> id)
      : TajoAsic(
            type,
            id,
            {cfg::SwitchType::NPU,
             cfg::SwitchType::VOQ,
             cfg::SwitchType::FABRIC}) {}
  bool isSupported(Feature feature) const override {
    return getSwitchType() != cfg::SwitchType::FABRIC
        ? isSupportedNonFabric(feature)
        : isSupportedFabric(feature);
  }
  AsicType getAsicType() const override {
    return AsicType::ASIC_TYPE_EBRO;
  }
  phy::DataPlanePhyChipType getDataPlanePhyChipType() const override {
    return phy::DataPlanePhyChipType::IPHY;
  }
  cfg::PortSpeed getMaxPortSpeed() const override {
    return cfg::PortSpeed::HUNDREDG;
  }
  std::set<cfg::StreamType> getQueueStreamTypes(bool /* cpu */) const override {
    /*
     * For Ebro asic, SDK 1.42.* queue type is ALL whereas SDK 1.56.* queue type
     * is unicast. Once SDK 1.56.* is rolled out after P4 warmboot support
     * across the entire fleet, the stream type can be encoded as Unicast.
     */
    return {getDefaultStreamType()};
  }
  int getDefaultNumPortQueues(cfg::StreamType streamType, bool /*cpu*/)
      const override {
    switch (streamType) {
      case cfg::StreamType::MULTICAST:
      // Handle FABRIC_TX when support is available for
      // this feature in SDK
      case cfg::StreamType::FABRIC_TX:
        throw FbossError("no queue exist for this stream type");
      case cfg::StreamType::UNICAST:
      case cfg::StreamType::ALL:
        return 8;
    }

    throw FbossError("Unknown streamType", streamType);
  }
  uint32_t getMaxLabelStackDepth() const override {
    return 3;
  }
  uint64_t getMMUSizeBytes() const override {
    return 108 * 1024 * 1024;
  }
  uint32_t getMaxMirrors() const override {
    // TODO - verify this
    return 4;
  }
  uint64_t getDefaultReservedBytes(cfg::StreamType /*streamType*/, bool /*cpu*/)
      const override {
    // Concept of reserved bytes does not apply to GB
    return 0;
  }
  cfg::MMUScalingFactor getDefaultScalingFactor(
      cfg::StreamType /*streamType*/,
      bool /*cpu*/) const override {
    // Concept of scaling factor does not apply returning the same value TH3
    return cfg::MMUScalingFactor::TWO;
  }
  int getMaxNumLogicalPorts() const override {
    // 256 physical lanes + cpu
    return 257;
  }
  uint16_t getMirrorTruncateSize() const override {
    return 220;
  }
  uint32_t getMaxWideEcmpSize() const override {
    return 128;
  }
  uint32_t getMaxLagMemberSize() const override {
    return 512;
  }
  int getSystemPortIDOffset() const override {
    return 1000;
  }
  uint32_t getSflowShimHeaderSize() const override {
    return 9;
  }
  std::optional<uint32_t> getPortSerdesPreemphasis() const override {
    return 50;
  }
  uint32_t getPacketBufferUnitSize() const override {
    return 384;
  }
  uint32_t getPacketBufferDescriptorSize() const override {
    return 40;
  }
  uint32_t getMaxVariableWidthEcmpSize() const override {
    return 512;
  }
  uint32_t getMaxEcmpSize() const override {
    return 512;
  }
  uint32_t getNumCores() const override {
    return 12;
  }
  uint32_t getStaticQueueLimitBytes() const override {
    return 16000 * getPacketBufferUnitSize();
  }

 private:
  bool isSupportedFabric(Feature feature) const;
  bool isSupportedNonFabric(Feature feature) const;
};

} // namespace facebook::fboss
