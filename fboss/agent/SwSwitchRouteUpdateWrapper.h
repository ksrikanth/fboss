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

#include "fboss/agent/RouteUpdateWrapper.h"
#include "fboss/agent/rib/RoutingInformationBase.h"

namespace facebook::fboss {
class SwSwitch;

std::shared_ptr<SwitchState> swSwitchFibUpdate(
    facebook::fboss::RouterID vrf,
    const facebook::fboss::IPv4NetworkToRouteMap& v4NetworkToRoute,
    const facebook::fboss::IPv6NetworkToRouteMap& v6NetworkToRoute,
    void* cookie);

class SwSwitchRouteUpdateWrapper : public RouteUpdateWrapper {
 public:
  explicit SwSwitchRouteUpdateWrapper(SwSwitch* sw);

 private:
  RoutingInformationBase* getRib() override;

  AdminDistance clientIdToAdminDistance(ClientID clientID) const override;
  void updateStats(
      const RoutingInformationBase::UpdateStatistics& stats) override;
  void programLegacyRib() override;
  void programClassIDLegacyRib(
      RouterID rid,
      const std::vector<folly::CIDRNetwork>& prefixes,
      std::optional<cfg::AclLookupClass> classId,
      bool async) override;
  SwSwitch* sw_;
};
} // namespace facebook::fboss
