/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/Platform.h"
#include "fboss/agent/SwitchStats.h"
#include "fboss/agent/hw/test/ConfigFactory.h"
#include "fboss/agent/hw/test/HwSwitchEnsemble.h"
#include "fboss/agent/hw/test/HwSwitchEnsembleFactory.h"
#include "fboss/agent/hw/test/HwVoqUtils.h"

#include "fboss/agent/benchmarks/AgentBenchmarks.h"

#include <folly/Benchmark.h>
#include <folly/IPAddress.h>
#include <folly/logging/xlog.h>

DECLARE_bool(enable_stats_update_thread);

namespace facebook::fboss {

RouteNextHopSet makeNextHops(std::vector<std::string> ipsAsStrings) {
  RouteNextHopSet nhops;
  for (const std::string& ipAsString : ipsAsStrings) {
    nhops.emplace(UnresolvedNextHop(folly::IPAddress(ipAsString), ECMP_WEIGHT));
  }
  return nhops;
}

/*
 * Collect stats 10K times and benchmark that.
 * Using a fixed number rather than letting framework
 * pick a N for internal iteration, since
 * - We want a large enough number to notice any memory bloat
 *   in this code path. Relying on the framework to pick a large
 *   enough iteration for us is dicey
 * - Comparing 10K iterations of 2 versions of code seems sufficient
 *   for us. Having the framework be aware that we are doing internal
 *   iteration (by letting it pick number of iterations), and calculating
 *   cost of a single iterations does not seem to have more fidelity
 */
BENCHMARK(HwStatsCollection) {
  folly::BenchmarkSuspender suspender;
  std::unique_ptr<AgentEnsemble> ensemble{};
  // maximum 48 master logical ports (taken from wedge400) to get
  // consistent performance results across platforms with different
  // number of ports but same ASIC, e.g. wedge400 and minipack
  int numPortsToCollectStats = 48;
  // route counters in hardware is currently limited to 255.
  // this is due to the fact that in some platforms, route class id
  // (8 bits) is overloaded to support counter id.
  int numRouteCounters = 255;

  AgentEnsembleSwitchConfigFn initialConfigFn =
      [numPortsToCollectStats,
       numRouteCounters](const AgentEnsemble& ensemble) {
        // Disable stats collection thread.
        FLAGS_enable_stats_update_thread = false;

        // Before m-mpu agent test, use first Asic for initialization.
        auto switchIds = ensemble.getSw()->getHwAsicTable()->getSwitchIDs();
        CHECK_GE(switchIds.size(), 1);
        auto asic =
            ensemble.getSw()->getHwAsicTable()->getHwAsic(*switchIds.cbegin());

        auto ports = ensemble.masterLogicalPortIds();
        auto portsNew = ports;
        portsNew.resize(std::min((int)ports.size(), numPortsToCollectStats));

        auto config =
            utility::onePortPerInterfaceConfig(ensemble.getSw(), portsNew);
        if (asic->isSupported(HwAsic::Feature::ROUTE_COUNTERS)) {
          config.switchSettings()->maxRouteCounterIDs() = numRouteCounters;
        }
        if (asic->getSwitchType() == cfg::SwitchType::VOQ) {
          config.dsfNodes() = *utility::addRemoteDsfNodeCfg(*config.dsfNodes());
        }
        return config;
      };

  ensemble = createAgentEnsemble(initialConfigFn);
  int iterations = 10'000;

  // Setup Remote Intf and System Ports
  if (ensemble->getSw()->getSwitchInfoTable().haveVoqSwitches()) {
    ensemble->applyNewState([&](const std::shared_ptr<SwitchState>& in) {
      return utility::setupRemoteIntfAndSysPorts(
          in, ensemble->scopeResolver(), ensemble->getSw()->getConfig());
    });
    // For VOQ switches we have 2K - 4K remote system ports (each with 4-8
    // VOQs). This is >10x of local ports on NPU platforms. Therefore, only run
    // 100 iterations.
    iterations = 100;
  }

  std::vector<PortID> ports = ensemble->masterLogicalPortIds();
  ports.resize(std::min((int)ports.size(), numPortsToCollectStats));

  if (ensemble->getSw()->getHwAsicTable()->isFeatureSupportedOnAnyAsic(
          HwAsic::Feature::ROUTE_COUNTERS)) {
    auto updater = ensemble->getSw()->getRouteUpdater();
    for (auto i = 0; i < numRouteCounters; i++) {
      folly::CIDRNetwork nw{
          folly::IPAddress(folly::sformat("2401:db00:0021:{:x}::", i)), 64};
      std::optional<RouteCounterID> counterID(std::to_string(i));
      UnicastRoute route = util::toUnicastRoute(
          nw,
          RouteNextHopEntry(
              makeNextHops({"1::"}), AdminDistance::EBGP, counterID));
      updater.addRoute(RouterID(0), ClientID::BGPD, route);
    }
    updater.program();
  }

  suspender.dismiss();
  for (auto i = 0; i < iterations; ++i) {
    ensemble->getSw()->updateStats();
  }
  suspender.rehire();
}

} // namespace facebook::fboss
