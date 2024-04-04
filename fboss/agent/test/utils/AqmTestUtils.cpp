/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/test/utils/AqmTestUtils.h"
#include "fboss/agent/FbossError.h"
#include "fboss/agent/gen-cpp2/switch_config_types.h"
#include "fboss/agent/hw/switch_asics/HwAsic.h"

namespace {
static constexpr auto kJerichoWordSize{16};
static constexpr auto kJerichoEcnThresholdIncrements{1024};
} // namespace

namespace facebook::fboss::utility {

int getRoundedBufferThreshold(
    const HwAsic* asic,
    int expectedThreshold,
    bool roundUp) {
  int threshold{};
  if (cfg::AsicType::ASIC_TYPE_EBRO == asic->getAsicType()) {
    /*
     * Ebro splits queue buffers into 16 blocks, watermarks and
     * ECN/WRED thresholds can only be reported / configured in
     * the order of these block thresholds as captured below.
     *
     * Doc: https://fburl.com/nil3f15m
     */
    const std::vector<int> kEbroQuantizedThresholds{
        (50 * 384),
        (256 * 384),
        (512 * 384),
        (1024 * 384),
        (2 * 1024 * 384),
        (3 * 1024 * 384),
        (6 * 1024 * 384),
        (7 * 1024 * 384),
        (8 * 1024 * 384),
        (9 * 1024 * 384),
        (10 * 1024 * 384),
        (11 * 1024 * 384),
        (12 * 1024 * 384),
        (15 * 1024 * 384),
        (16000 * 384)};
    auto it = std::lower_bound(
        kEbroQuantizedThresholds.begin(),
        kEbroQuantizedThresholds.end(),
        expectedThreshold);

    if (roundUp) {
      if (it == kEbroQuantizedThresholds.end()) {
        FbossError("Invalid threshold for ASIC, ", expectedThreshold);
      } else {
        threshold = *it;
      }
    } else {
      if (it != kEbroQuantizedThresholds.end() && *it == expectedThreshold) {
        threshold = *it;
      } else if (it != kEbroQuantizedThresholds.begin()) {
        threshold = *(std::prev(it));
      } else {
        FbossError("Invalid threshold for ASIC, ", expectedThreshold);
      }
    }
  } else if (asic->getAsicType() == cfg::AsicType::ASIC_TYPE_JERICHO2) {
    // Jericho2 ECN thresholds are in multiples of 1K
    threshold = kJerichoEcnThresholdIncrements *
        ceil(static_cast<double>(expectedThreshold) /
             kJerichoEcnThresholdIncrements);
  } else {
    // Thresholds are applied in multiples of unit buffer size
    auto bufferUnitSize = asic->getPacketBufferUnitSize();
    /*
     * Round up:
     * For expected threshold of 300B with round up, we need 2 cells worth
     * bytes in case of TH3, to get the same, we do 300 / CELLSIZE to find
     * the number of CELLs needed to accommodate this size, which comes out
     * to be 1.18 (rounded up to 2) and then multiply it by CELLSIZE
     * to get the number of bytes for 2 cells, which will be 508B.
     *
     * Round down:
     * For expected threshold of 600B with round down, we need 2 cell worth
     * bytes in case of TH3 (no use case), to get the same, we do
     * 600 / CELLSIZE to find the number of CELLs needed to accommodate this
     * size, which comes out to be 2.36 (integer round down to 2) and then
     * multiply it by CELLSIZE to get the number of bytes for 2 cells, which
     * will be 508B.
     */
    threshold = roundUp ? bufferUnitSize *
            ceil(static_cast<double>(expectedThreshold) / bufferUnitSize)
                        : bufferUnitSize *
            floor(static_cast<double>(expectedThreshold) / bufferUnitSize);
  }

  return threshold;
}

size_t getEffectiveBytesPerPacket(const HwAsic* asic, int pktSizeBytes) {
  auto bufferDescriptorBytes = asic->getPacketBufferDescriptorSize();

  size_t effectiveBytesPerPkt;
  if (asic->getAsicType() == cfg::AsicType::ASIC_TYPE_JERICHO2) {
    // For Jericho2, the buffer unit size does not matter, each packet has
    // the overhead added to it and rounded to the next multiple of word size.
    effectiveBytesPerPkt = kJerichoWordSize *
        ((pktSizeBytes + bufferDescriptorBytes + kJerichoWordSize - 1) /
         kJerichoWordSize);
  } else {
    auto packetBufferUnitBytes = asic->getPacketBufferUnitSize();
    assert(packetBufferUnitBytes);
    effectiveBytesPerPkt = packetBufferUnitBytes *
        ((pktSizeBytes + bufferDescriptorBytes + packetBufferUnitBytes - 1) /
         packetBufferUnitBytes);
  }
  return effectiveBytesPerPkt;
}

double getAlphaFromScalingFactor(
    const HwAsic* asic,
    cfg::MMUScalingFactor scalingFactor) {
  int powof = asic->getBufferDynThreshFromScalingFactor(scalingFactor);
  return pow(2, powof);
}

}; // namespace facebook::fboss::utility
