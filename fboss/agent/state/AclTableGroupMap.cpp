/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include "fboss/agent/state/AclTableGroupMap.h"

#include "fboss/agent/state/NodeMap-defs.h"

#include "fboss/agent/HwSwitchMatcher.h"
#include "fboss/agent/state/SwitchState.h"

namespace facebook::fboss {

AclTableGroupMap::AclTableGroupMap() {}

AclTableGroupMap::~AclTableGroupMap() {}

std::shared_ptr<AclTableGroupMap>
AclTableGroupMap::createDefaultAclTableGroupMapFromThrift(
    std::map<std::string, state::AclEntryFields> const& thriftMap) {
  auto aclTableGroupMap = std::make_shared<AclTableGroupMap>();
  aclTableGroupMap->addNode(
      AclTableGroup::createDefaultAclTableGroupFromThrift(thriftMap));

  return aclTableGroupMap;
}

std::shared_ptr<AclMap> AclTableGroupMap::getDefaultAclTableGroupMap(
    std::map<cfg::AclStage, state::AclTableGroupFields> const& thriftMap) {
  if (thriftMap.find(cfg::AclStage::INGRESS) != thriftMap.end()) {
    auto& aclTableGroup = thriftMap.at(cfg::AclStage::INGRESS);
    return AclTableGroup::getDefaultAclTableGroup(aclTableGroup);
  } else {
    XLOG(ERR) << "AclTableGroupMap missing from warmboot state file";
    return nullptr;
  }
}

std::shared_ptr<AclMap> MultiSwitchAclTableGroupMap::getAclMap() const {
  auto node = getMapNodeIf(HwSwitchMatcher::defaultHwSwitchMatcher());
  if (!node) {
    return nullptr;
  }
  // THRIFT_COPY
  return AclTableGroupMap::getDefaultAclTableGroupMap(node->toThrift());
}

std::shared_ptr<MultiSwitchAclTableGroupMap>
MultiSwitchAclTableGroupMap::fromAclMap(
    const std::map<std::string, state::AclEntryFields>& aclMap) {
  auto aclTableGroupMap =
      AclTableGroupMap::createDefaultAclTableGroupMapFromThrift(aclMap);
  auto multiAclTableGroupMap = std::make_shared<MultiSwitchAclTableGroupMap>();
  multiAclTableGroupMap->addMapNode(
      std::move(aclTableGroupMap), HwSwitchMatcher::defaultHwSwitchMatcher());
  return multiAclTableGroupMap;
}

template class ThriftMapNode<AclTableGroupMap, AclTableGroupMapTraits>;

} // namespace facebook::fboss
