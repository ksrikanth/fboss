/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include "fboss/agent/hw/test/ConfigFactory.h"

#include "fboss/agent/FbossError.h"
#include "fboss/agent/gen-cpp2/switch_config_types.h"
#include "fboss/agent/hw/switch_asics/EbroAsic.h"
#include "fboss/agent/hw/switch_asics/HwAsic.h"
#include "fboss/agent/hw/switch_asics/Jericho2Asic.h"
#include "fboss/agent/hw/switch_asics/Jericho3Asic.h"
#include "fboss/agent/hw/switch_asics/Ramon3Asic.h"
#include "fboss/agent/hw/switch_asics/RamonAsic.h"
#include "fboss/agent/hw/test/HwPortUtils.h"
#include "fboss/agent/hw/test/HwSwitchEnsemble.h"
#include "fboss/agent/state/Port.h"
#include "fboss/agent/state/PortMap.h"
#include "fboss/agent/test/utils/PortTestUtils.h"
#include "fboss/lib/config/PlatformConfigUtils.h"
#include "fboss/lib/platforms/PlatformMode.h"

#include <folly/Format.h>
#include <folly/logging/xlog.h>
#include <thrift/lib/cpp/util/EnumUtils.h>

using namespace facebook::fboss;
using namespace facebook::fboss::utility;

namespace {

void removePort(
    cfg::SwitchConfig& config,
    PortID port,
    bool supportsAddRemovePort) {
  auto cfgPort = findCfgPortIf(config, port);
  if (cfgPort == config.ports()->end()) {
    return;
  }
  if (supportsAddRemovePort) {
    config.ports()->erase(cfgPort);
    auto removed = std::remove_if(
        config.vlanPorts()->begin(),
        config.vlanPorts()->end(),
        [port](auto vlanPort) {
          return PortID(*vlanPort.logicalPort()) == port;
        });
    config.vlanPorts()->erase(removed, config.vlanPorts()->end());
  } else {
    cfgPort->state() = cfg::PortState::DISABLED;
  }
}

void removeSubsumedPorts(
    cfg::SwitchConfig& config,
    const cfg::PlatformPortConfig& profile,
    bool supportsAddRemovePort) {
  if (auto subsumedPorts = profile.subsumedPorts()) {
    for (auto& subsumedPortID : subsumedPorts.value()) {
      removePort(config, PortID(subsumedPortID), supportsAddRemovePort);
    }
  }
}
} // unnamed namespace

namespace facebook::fboss::utility {

std::pair<int, int> getRetryCountAndDelay(const HwAsic* asic) {
  if (asic->isSupported(HwAsic::Feature::SLOW_STAT_UPDATE)) {
    return std::make_pair(50, 5000);
  }
  // default
  return std::make_pair(30, 1000);
}

void setPortToDefaultProfileIDMap(
    const std::shared_ptr<MultiSwitchPortMap>& ports,
    const PlatformMapping* platformMapping,
    const HwAsic* asic,
    bool supportsAddRemovePort,
    std::optional<std::vector<PortID>> masterLogicalPortIds) {
  // Most of the platforms will have default ports created when the HW is
  // initialized. But for those who don't have any default port, we'll fall
  // back to use PlatformPort and the safe PortProfileID
  if (ports->numNodes() > 0) {
    for (const auto& portMap : std::as_const(*ports)) {
      for (const auto& port : std::as_const(*portMap.second)) {
        auto profileID = port.second->getProfileID();
        // In case the profileID learnt from HW is using default, then use speed
        // to get the real profileID
        if (profileID == cfg::PortProfileID::PROFILE_DEFAULT) {
          profileID = platformMapping->getProfileIDBySpeed(
              port.second->getID(), port.second->getSpeed());
        }
        getPortToDefaultProfileIDMap().emplace(port.second->getID(), profileID);
      }
    }
  } else {
    const auto& safeProfileIDs = getSafeProfileIDs(
        platformMapping,
        asic,
        getSubsidiaryPortIDs(platformMapping->getPlatformPorts()),
        supportsAddRemovePort,
        masterLogicalPortIds);
    getPortToDefaultProfileIDMap().insert(
        safeProfileIDs.begin(), safeProfileIDs.end());
  }
  XLOG(DBG2) << "PortToDefaultProfileIDMap has "
             << getPortToDefaultProfileIDMap().size() << " ports";
}

cfg::SwitchConfig oneL3IntfConfig(
    const HwSwitch* hwSwitch,
    PortID port,
    const std::map<cfg::PortType, cfg::PortLoopbackMode>& lbModeMap,
    int baseVlanId) {
  std::vector<PortID> ports{port};
  return oneL3IntfNPortConfig(
      hwSwitch->getPlatform()->getPlatformMapping(),
      hwSwitch->getPlatform()->getAsic(),
      ports,
      hwSwitch->getPlatform()->supportsAddRemovePort(),
      lbModeMap,
      true,
      baseVlanId);
}

cfg::SwitchConfig oneL3IntfConfig(
    const PlatformMapping* platformMapping,
    const HwAsic* asic,
    PortID port,
    bool supportsAddRemovePort,
    const std::map<cfg::PortType, cfg::PortLoopbackMode>& lbModeMap,
    int baseVlanId) {
  std::vector<PortID> ports{port};
  return oneL3IntfNPortConfig(
      platformMapping,
      asic,
      ports,
      supportsAddRemovePort,
      lbModeMap,
      true,
      baseVlanId);
}

cfg::SwitchConfig oneL3IntfNoIPAddrConfig(
    const HwSwitch* hwSwitch,
    PortID port,
    const std::map<cfg::PortType, cfg::PortLoopbackMode>& lbModeMap) {
  std::vector<PortID> ports{port};
  return oneL3IntfNPortConfig(
      hwSwitch->getPlatform()->getPlatformMapping(),
      hwSwitch->getPlatform()->getAsic(),
      ports,
      hwSwitch->getPlatform()->supportsAddRemovePort(),
      lbModeMap,
      false /*interfaceHasSubnet*/);
}

cfg::SwitchConfig onePortPerInterfaceConfig(
    const HwSwitch* hwSwitch,
    const std::vector<PortID>& ports,
    const std::map<cfg::PortType, cfg::PortLoopbackMode>& lbModeMap,
    bool interfaceHasSubnet,
    bool setInterfaceMac,
    int baseIntfId,
    bool enableFabricPorts) {
  return multiplePortsPerIntfConfig(
      hwSwitch->getPlatform()->getPlatformMapping(),
      hwSwitch->getPlatform()->getAsic(),
      ports,
      hwSwitch->getPlatform()->supportsAddRemovePort(),
      lbModeMap,
      interfaceHasSubnet,
      setInterfaceMac,
      baseIntfId,
      1, /* portPerIntf*/
      enableFabricPorts);
}

cfg::SwitchConfig twoL3IntfConfig(
    const HwSwitch* hwSwitch,
    PortID port1,
    PortID port2,
    const std::map<cfg::PortType, cfg::PortLoopbackMode>& lbModeMap) {
  return twoL3IntfConfig(
      hwSwitch->getPlatform()->getPlatformMapping(),
      hwSwitch->getPlatform()->getAsic(),
      hwSwitch->getPlatform()->supportsAddRemovePort(),
      port1,
      port2,
      lbModeMap);
}

void updatePortSpeed(
    const PlatformMapping* platformMapping,
    bool supportsAddRemovePort,
    cfg::SwitchConfig& cfg,
    PortID portID,
    cfg::PortSpeed speed) {
  auto cfgPort = findCfgPort(cfg, portID);
  const auto& platPortEntry = platformMapping->getPlatformPort(portID);
  auto profileID = platformMapping->getProfileIDBySpeed(portID, speed);
  const auto& supportedProfiles = *platPortEntry.supportedProfiles();
  auto profile = supportedProfiles.find(profileID);
  if (profile == supportedProfiles.end()) {
    throw FbossError("No profile ", profileID, " found for port ", portID);
  }
  cfgPort->profileID() = profileID;
  cfgPort->speed() = speed;
  removeSubsumedPorts(cfg, profile->second, supportsAddRemovePort);
}

// Set any ports in this port group to use the specified speed,
// and disables any ports that don't support this speed.
void configurePortGroup(
    const PlatformMapping* platformMapping,
    bool supportsAddRemovePort,
    cfg::SwitchConfig& config,
    cfg::PortSpeed speed,
    std::vector<PortID> allPortsInGroup) {
  for (auto portID : allPortsInGroup) {
    // We might have removed a subsumed port already in a previous
    // iteration of the loop.
    auto cfgPort = findCfgPortIf(config, portID);
    if (cfgPort == config.ports()->end()) {
      continue;
    }

    const auto& platPortEntry = platformMapping->getPlatformPort(portID);
    auto profileID = platformMapping->getProfileIDBySpeedIf(portID, speed);
    if (!profileID.has_value()) {
      XLOG(WARNING) << "Port " << static_cast<int>(portID)
                    << "Doesn't support speed " << static_cast<int>(speed)
                    << ", disabling it instead";
      // Port doesn't support this speed, just disable it.
      cfgPort->state() = cfg::PortState::DISABLED;
      continue;
    }

    auto supportedProfiles = *platPortEntry.supportedProfiles();
    auto profile = supportedProfiles.find(profileID.value());
    if (profile == supportedProfiles.end()) {
      throw std::runtime_error(folly::to<std::string>(
          "No profile ", profileID.value(), " found for port ", portID));
    }

    cfgPort->profileID() = profileID.value();
    cfgPort->speed() = speed;
    cfgPort->state() = cfg::PortState::ENABLED;
    removeSubsumedPorts(config, profile->second, supportsAddRemovePort);
  }
}

void configurePortProfile(
    const HwSwitch& hwSwitch,
    cfg::SwitchConfig& config,
    cfg::PortProfileID profileID,
    std::vector<PortID> allPortsInGroup,
    PortID controllingPortID) {
  auto platform = hwSwitch.getPlatform();
  auto supportsAddRemovePort = platform->supportsAddRemovePort();
  auto controllingPort = findCfgPort(config, controllingPortID);
  for (auto portID : allPortsInGroup) {
    // We might have removed a subsumed port already in a previous
    // iteration of the loop.
    auto cfgPort = findCfgPortIf(config, portID);
    if (cfgPort == config.ports()->end()) {
      return;
    }

    auto platformPort = platform->getPlatformPort(portID);
    const auto& platPortEntry = platformPort->getPlatformPortEntry();
    auto supportedProfiles = *platPortEntry.supportedProfiles();
    auto profile = supportedProfiles.find(profileID);
    if (profile == supportedProfiles.end()) {
      XLOG(WARNING) << "Port " << static_cast<int>(portID)
                    << " doesn't support profile "
                    << apache::thrift::util::enumNameSafe(profileID)
                    << ", disabling it instead";
      // Port doesn't support this speed, just disable it.
      cfgPort->state() = cfg::PortState::DISABLED;
      continue;
    }
    cfgPort->profileID() = profileID;
    cfgPort->speed() = getSpeed(profileID);
    cfgPort->ingressVlan() = *controllingPort->ingressVlan();
    cfgPort->state() = cfg::PortState::ENABLED;
    removeSubsumedPorts(config, profile->second, supportsAddRemovePort);
  }
}

std::vector<PortID> getAllPortsInGroup(
    const PlatformMapping* platformMapping,
    PortID portID) {
  std::vector<PortID> allPortsinGroup;
  if (const auto& platformPorts = platformMapping->getPlatformPorts();
      !platformPorts.empty()) {
    const auto& portList =
        utility::getPlatformPortsByControllingPort(platformPorts, portID);
    for (const auto& port : portList) {
      allPortsinGroup.push_back(PortID(*port.mapping()->id()));
    }
  }
  return allPortsinGroup;
}

cfg::SwitchConfig createRtswUplinkDownlinkConfig(
    const HwSwitch* hwSwitch,
    HwSwitchEnsemble* ensemble,
    const std::vector<PortID>& masterLogicalPortIds,
    cfg::PortSpeed portSpeed,
    const std::map<cfg::PortType, cfg::PortLoopbackMode>& lbModeMap,
    std::vector<PortID>& uplinks,
    std::vector<PortID>& downlinks) {
  const int kTotalLinkCount = 32;
  std::vector<PortID> disabledLinks;
  ensemble->createEqualDistributedUplinkDownlinks(
      masterLogicalPortIds, uplinks, downlinks, disabledLinks, kTotalLinkCount);

  // make all logicalPorts have their own vlan id
  auto cfg = utility::onePortPerInterfaceConfig(
      hwSwitch, masterLogicalPortIds, lbModeMap, true, kUplinkBaseVlanId);
  for (auto portId : uplinks) {
    utility::updatePortSpeed(
        hwSwitch->getPlatform()->getPlatformMapping(),
        hwSwitch->getPlatform()->supportsAddRemovePort(),
        cfg,
        portId,
        portSpeed);
  }
  for (auto portId : downlinks) {
    utility::updatePortSpeed(
        hwSwitch->getPlatform()->getPlatformMapping(),
        hwSwitch->getPlatform()->supportsAddRemovePort(),
        cfg,
        portId,
        portSpeed);
  }

  // disable all ports other than uplinks/downlinks
  // this is needed to consume the guranteed buffer space same as
  // we do for RTSW in production
  for (auto& port : disabledLinks) {
    auto portCfg = utility::findCfgPort(cfg, port);
    portCfg->state() = cfg::PortState::DISABLED;
  }

  return cfg;
}

cfg::SwitchConfig createUplinkDownlinkConfig(
    const PlatformMapping* platformMapping,
    const HwAsic* asic,
    PlatformType platformType,
    bool supportsAddRemovePort,
    const std::vector<PortID>& masterLogicalPortIds,
    uint16_t uplinksCount,
    cfg::PortSpeed uplinkPortSpeed,
    cfg::PortSpeed downlinkPortSpeed,
    const std::map<cfg::PortType, cfg::PortLoopbackMode>& lbModeMap,
    bool interfaceHasSubnet) {
  /*
   * For platforms which are not rsw, its always onePortPerInterfaceConfig
   * config with all uplinks and downlinks in same speed. Use the
   * config factory utility to generate the config, update the port
   * speed and return the config.
   */
  if (!isRswPlatform(platformType)) {
    auto config = utility::onePortPerInterfaceConfig(
        platformMapping,
        asic,
        masterLogicalPortIds,
        supportsAddRemovePort,
        lbModeMap,
        interfaceHasSubnet,
        true,
        kUplinkBaseVlanId);
    for (auto portId : masterLogicalPortIds) {
      utility::updatePortSpeed(
          platformMapping,
          supportsAddRemovePort,
          config,
          portId,
          uplinkPortSpeed);
    }
    return config;
  }

  /*
   * Configure the top ports in the master logical port ids as uplinks
   * and remaining as downlinks based on the platform
   */
  std::vector<PortID> uplinkMasterPorts(
      masterLogicalPortIds.begin(),
      masterLogicalPortIds.begin() + uplinksCount);
  std::vector<PortID> downlinkMasterPorts(
      masterLogicalPortIds.begin() + uplinksCount, masterLogicalPortIds.end());
  /*
   * Prod uplinks are always onePortPerInterfaceConfig. Use the existing
   * utlity to generate one port per vlan config followed by port
   * speed update.
   */
  auto config = utility::onePortPerInterfaceConfig(
      platformMapping,
      asic,
      uplinkMasterPorts,
      supportsAddRemovePort,
      lbModeMap,
      interfaceHasSubnet,
      true /*setInterfaceMac*/,
      kUplinkBaseVlanId);
  for (auto portId : uplinkMasterPorts) {
    utility::updatePortSpeed(
        platformMapping,
        supportsAddRemovePort,
        config,
        portId,
        uplinkPortSpeed);
  }

  /*
   * downlinkMasterPorts are master logical port ids. Get all the ports in
   * a port group and add them to the config. Use configurePortGroup
   * to set the right speed and remove/disable the subsumed ports
   * based on the platform.
   */
  std::vector<PortID> allDownlinkPorts;
  for (auto masterDownlinkPort : downlinkMasterPorts) {
    auto allDownlinkPortsInGroup =
        utility::getAllPortsInGroup(platformMapping, masterDownlinkPort);
    for (auto logicalPortId : allDownlinkPortsInGroup) {
      auto portConfig = findCfgPortIf(config, masterDownlinkPort);
      if (portConfig != config.ports()->end()) {
        allDownlinkPorts.push_back(logicalPortId);
      }
    }
    configurePortGroup(
        platformMapping,
        supportsAddRemovePort,
        config,
        downlinkPortSpeed,
        allDownlinkPortsInGroup);
  }

  // Vlan config
  cfg::Vlan vlan;
  vlan.id() = kDownlinkBaseVlanId;
  vlan.name() = "vlan" + std::to_string(kDownlinkBaseVlanId);
  vlan.routable() = true;
  config.vlans()->push_back(vlan);

  // Vlan port config
  for (auto logicalPortId : allDownlinkPorts) {
    auto portConfig = utility::findCfgPortIf(config, logicalPortId);
    if (portConfig == config.ports()->end()) {
      continue;
    }
    auto iter = lbModeMap.find(portConfig->get_portType());
    if (iter == lbModeMap.end()) {
      throw FbossError(
          "Unable to find the desired loopback mode for port type: ",
          portConfig->get_portType());
    }
    portConfig->loopbackMode() = iter->second;
    portConfig->ingressVlan() = kDownlinkBaseVlanId;
    portConfig->routable() = true;
    portConfig->parserType() = cfg::ParserType::L3;
    portConfig->maxFrameSize() = 9412;
    cfg::VlanPort vlanPort;
    vlanPort.logicalPort() = logicalPortId;
    vlanPort.vlanID() = kDownlinkBaseVlanId;
    vlanPort.spanningTreeState() = cfg::SpanningTreeState::FORWARDING;
    vlanPort.emitTags() = false;
    config.vlanPorts()->push_back(vlanPort);
  }

  cfg::Interface interface;
  interface.intfID() = kDownlinkBaseVlanId;
  interface.vlanID() = kDownlinkBaseVlanId;
  interface.routerID() = 0;
  interface.mac() = utility::kLocalCpuMac().toString();
  interface.mtu() = 9000;
  if (interfaceHasSubnet) {
    interface.ipAddresses()->resize(2);
    interface.ipAddresses()[0] = "192.1.1.1/24";
    interface.ipAddresses()[1] = "2192::1/64";
  }
  config.interfaces()->push_back(interface);

  return config;
}

std::vector<PortDescriptor> getUplinksForEcmp(
    const HwSwitch* hwSwitch,
    const cfg::SwitchConfig& config,
    const int uplinkCount,
    const bool mmu_lossless_mode) {
  auto uplinks = getAllUplinkDownlinkPorts(
                     hwSwitch, config, uplinkCount, mmu_lossless_mode)
                     .first;
  std::vector<PortDescriptor> ecmpPorts;
  for (auto it = uplinks.begin(); it != uplinks.end(); it++) {
    ecmpPorts.push_back(PortDescriptor(*it));
  }
  return ecmpPorts;
}

/*
 * Generic function to separate uplinks and downlinks, given a HwSwitch* and a
 * SwitchConfig.
 *
 * Calls already-defined RSW helper functions if HwSwitch* is an RSW platform,
 * otherwise separates the config's ports.
 */
UplinkDownlinkPair getAllUplinkDownlinkPorts(
    const HwSwitch* hwSwitch,
    const cfg::SwitchConfig& config,
    const int ecmpWidth,
    const bool mmu_lossless) {
  auto platMode = hwSwitch->getPlatform()->getType();
  return getAllUplinkDownlinkPorts(platMode, config, ecmpWidth, mmu_lossless);
}

/*
 * Takes a SwitchConfig and returns a map of queue IDs to DSCPs.
 * Particularly useful in verifyQueueMappings, where we don't have a guarantee
 * of what the QoS policies look like and we can't rely on something like
 * kOlympicQueueToDscp().
 */
std::map<int, std::vector<uint8_t>> getOlympicQosMaps(
    const cfg::SwitchConfig& config) {
  std::map<int, std::vector<uint8_t>> queueToDscp;

  for (const auto& qosPolicy : *config.qosPolicies()) {
    auto qosName = qosPolicy.get_name();
    XLOG(DBG2) << "Iterating over QoS policies: found qosPolicy " << qosName;

    // Optional thrift field access
    if (auto qosMap = qosPolicy.qosMap()) {
      auto dscpMaps = *qosMap->dscpMaps();

      for (const auto& dscpMap : dscpMaps) {
        auto queueId = dscpMap.get_internalTrafficClass();
        // Internally (i.e. in thrift), the mapping is implemented as a
        // map<int16_t, vector<int8_t>>; however, in functions like
        // verifyQueueMapping in HwTestQosUtils, the argument used is of the
        // form map<int, uint8_t>.
        // Trying to assign vector<uint8_t> to a vector<int8_t> makes the STL
        // unhappy, so we can just loop through and construct one on our own.
        std::vector<uint8_t> dscps;
        for (auto val : *dscpMap.fromDscpToTrafficClass()) {
          dscps.push_back((uint8_t)val);
        }
        queueToDscp[(int)queueId] = std::move(dscps);
      }
    } else {
      XLOG(ERR) << "qosMap not found in qosPolicy: " << qosName;
    }
  }

  return queueToDscp;
}

} // namespace facebook::fboss::utility
