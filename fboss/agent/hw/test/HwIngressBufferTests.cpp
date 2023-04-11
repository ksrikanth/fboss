/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include <folly/logging/xlog.h>
#include "fboss/agent/hw/test/ConfigFactory.h"
#include "fboss/agent/hw/test/HwTest.h"
#include "fboss/agent/hw/test/HwTestPfcUtils.h"
#include "fboss/agent/types.h"

using namespace facebook::fboss;

namespace {

// arbitrary values
constexpr int kPgResumeOffsetCells = 5;
constexpr int kPgMinLimitCells = 6;
constexpr int kPgHeadroomLimitCells = 2;
constexpr int kPoolHeadroomLimitCells = 10;
constexpr int kPoolSharedCells = 78;
constexpr std::string_view kBufferPoolName = "fooBuffer";

// util to construct per PG params
// pass in number of queues and use queueId, deltaValue to differ
// PG params
std::vector<cfg::PortPgConfig> getPortPgConfig(
    int mmuCellBytes,
    const std::vector<int>& queues,
    int deltaValue = 0,
    const bool enableHeadroom = true) {
  std::vector<cfg::PortPgConfig> portPgConfigs;

  for (const auto queueId : queues) {
    cfg::PortPgConfig pgConfig;
    pgConfig.id() = queueId;
    // use queueId value to assign different values for each param/queue
    if (enableHeadroom) {
      pgConfig.headroomLimitBytes() =
          (kPgHeadroomLimitCells + queueId + deltaValue) * mmuCellBytes;
    }
    pgConfig.minLimitBytes() =
        (kPgMinLimitCells + queueId + deltaValue) * mmuCellBytes;
    pgConfig.resumeOffsetBytes() =
        (kPgResumeOffsetCells + queueId + deltaValue) * mmuCellBytes;
    pgConfig.scalingFactor() = cfg::MMUScalingFactor::EIGHT;
    pgConfig.bufferPoolName() = kBufferPoolName;
    portPgConfigs.emplace_back(pgConfig);
  }
  return portPgConfigs;
}

cfg::BufferPoolConfig getBufferPoolHighDefaultConfig(int mmuBytesInCell) {
  cfg::BufferPoolConfig tmpCfg;
  tmpCfg.headroomBytes() = 12432 * mmuBytesInCell;
  tmpCfg.sharedBytes() = 119044 * mmuBytesInCell;
  return tmpCfg;
}

cfg::BufferPoolConfig getBufferPoolConfig(
    int mmuBytesInCell,
    int deltaValue = 0) {
  // same as one in pg
  // std::string bufferName = "fooBuffer";
  cfg::BufferPoolConfig tmpCfg;
  tmpCfg.headroomBytes() =
      (kPoolHeadroomLimitCells + deltaValue) * mmuBytesInCell;
  tmpCfg.sharedBytes() = (kPoolSharedCells + deltaValue) * mmuBytesInCell;
  return tmpCfg;
}

} // unnamed namespace

namespace facebook::fboss {

class HwIngressBufferTest : public HwTest {
 protected:
  cfg::SwitchConfig initialConfig() const {
    return utility::oneL3IntfConfig(getHwSwitch(), masterLogicalPortIds()[0]);
  }

  void setupGlobalBuffer(cfg::SwitchConfig& cfg, bool useLargeHwValues) {
    std::map<std::string, cfg::BufferPoolConfig> bufferPoolCfgMap;
    cfg::BufferPoolConfig bufferPoolConfig;
    if (useLargeHwValues) {
      bufferPoolConfig = getBufferPoolHighDefaultConfig(
          getPlatform()->getAsic()->getPacketBufferUnitSize());
    } else {
      bufferPoolConfig = getBufferPoolConfig(
          getPlatform()->getAsic()->getPacketBufferUnitSize());
    }

    bufferPoolCfgMap.insert(
        make_pair(static_cast<std::string>(kBufferPoolName), bufferPoolConfig));
    cfg.bufferPoolConfigs() = std::move(bufferPoolCfgMap);
  }

  void setupPgBuffers(cfg::SwitchConfig& cfg, const bool enableHeadroom) {
    std::map<std::string, std::vector<cfg::PortPgConfig>> portPgConfigMap;
    portPgConfigMap["foo"] = getPortPgConfig(
        getPlatform()->getAsic()->getPacketBufferUnitSize(),
        {0, 1},
        0 /* delta value */,
        enableHeadroom);
    cfg.portPgConfigs() = portPgConfigMap;
  }

  void
  setupPfc(cfg::SwitchConfig& cfg, const PortID& portId, const bool pfcEnable) {
    auto portCfg = utility::findCfgPort(cfg, portId);
    // setup pfc
    cfg::PortPfc pfc;
    pfc.portPgConfigName() = "foo";
    pfc.tx() = pfcEnable;
    portCfg->pfc() = pfc;
  }

  void setupHelper(
      bool enableHeadroom = true,
      bool pfcEnable = true,
      bool enableHighBufferValues = false) {
    auto cfg = initialConfig();

    // setup PFC
    setupPfc(cfg, masterLogicalPortIds()[0], pfcEnable);
    // setup pgConfig
    setupPgBuffers(cfg, enableHeadroom);
    // setup bufferPool
    setupGlobalBuffer(cfg, enableHighBufferValues);
    applyNewConfig(cfg);
    cfg_ = cfg;
  }

  void setupHelperWithHighBufferValues() {
    setupHelper(true, true, true /* enable high buffer defaults */);
  }

  cfg::SwitchConfig cfg_;
};

// Create PG config, associate with PFC config
// validate that SDK programming is as per the cfg
// Read back from HW (using SDK calls) and validate
TEST_F(HwIngressBufferTest, validateConfig) {
  auto setup = [=]() { setupHelper(); };

  auto verify = [&]() {
    utility::checkSwHwPgCfgMatch(
        getHwSwitch(),
        getProgrammedState()->getPort(PortID(masterLogicalPortIds()[0])),
        true /*pfcEnable*/);
  };

  verifyAcrossWarmBoots(setup, verify);
}

} // namespace facebook::fboss
