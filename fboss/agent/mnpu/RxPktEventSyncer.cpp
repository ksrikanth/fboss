/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include "fboss/agent/mnpu/RxPktEventSyncer.h"
#if FOLLY_HAS_COROUTINES
#include <folly/experimental/coro/BlockingWait.h>
#endif

namespace facebook::fboss {

RxPktEventSyncer::RxPktEventSyncer(
    uint16_t serverPort,
    SwitchID switchId,
    folly::EventBase* connRetryEvb,
    std::optional<std::string> multiSwitchStatsPrefix)
    : ThriftSinkClient<multiswitch::RxPacket>::ThriftSinkClient(
          "RxPktEventThriftSyncer",
          serverPort,
          switchId,
          RxPktEventSyncer::initRxPktEventSink,
          std::make_shared<folly::ScopedEventBaseThread>(
              "RxPktEventSyncerThread"),
          connRetryEvb,
          multiSwitchStatsPrefix) {}

ThriftSinkClient<multiswitch::RxPacket>::EventNotifierSinkClient
RxPktEventSyncer::initRxPktEventSink(
    SwitchID switchId,
    apache::thrift::Client<multiswitch::MultiSwitchCtrl>* client) {
#if FOLLY_HAS_COROUTINES
  return folly::coro::blockingWait(client->co_notifyRxPacket(switchId));
#else
  return apache::thrift::ClientSink<multiswitch::RxPacket, bool>();
#endif
}

} // namespace facebook::fboss
