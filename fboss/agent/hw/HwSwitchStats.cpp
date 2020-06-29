/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/hw/HwSwitchStats.h"

#include "fboss/agent/SwitchStats.h"

using facebook::fb303::RATE;
using facebook::fb303::SUM;

namespace facebook::fboss {

HwSwitchStats::HwSwitchStats(
    ThreadLocalStatsMap* map,
    const std::string& platform)
    : txPktAlloc_(
          map,
          SwitchStats::kCounterPrefix + platform + ".tx.pkt.allocated",
          SUM,
          RATE),
      txPktFree_(
          map,
          SwitchStats::kCounterPrefix + platform + ".tx.pkt.freed",
          SUM,
          RATE),
      txSent_(
          map,
          SwitchStats::kCounterPrefix + platform + ".tx.pkt.sent",
          SUM,
          RATE),
      txSentDone_(
          map,
          SwitchStats::kCounterPrefix + platform + ".tx.pkt.sent.done",
          SUM,
          RATE),
      txErrors_(
          map,
          SwitchStats::kCounterPrefix + platform + ".tx.errors",
          SUM,
          RATE),
      txPktAllocErrors_(
          map,
          SwitchStats::kCounterPrefix + platform + ".tx.pkt.allocation.errors",
          SUM,
          RATE),
      txQueued_(
          map,
          SwitchStats::kCounterPrefix + platform + ".tx.pkt.queued_us",
          100,
          0,
          1000),
      parityErrors_(
          map,
          SwitchStats::kCounterPrefix + platform + ".parity.errors",
          SUM,
          RATE),
      corrParityErrors_(
          map,
          SwitchStats::kCounterPrefix + platform + ".parity.corr",
          SUM,
          RATE),
      uncorrParityErrors_(
          map,
          SwitchStats::kCounterPrefix + platform + ".parity.uncorr",
          SUM,
          RATE),
      asicErrors_(
          map,
          SwitchStats::kCounterPrefix + platform + ".asic.error",
          SUM,
          RATE) {}
} // namespace facebook::fboss
