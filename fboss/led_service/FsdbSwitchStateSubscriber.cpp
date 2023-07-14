// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#include "fboss/led_service/FsdbSwitchStateSubscriber.h"
#include <folly/logging/xlog.h>
#include <thrift/lib/cpp2/protocol/Serializer.h>
#include "fboss/fsdb/client/FsdbPubSubManager.h"
#include "fboss/fsdb/common/Flags.h"
#include "fboss/fsdb/if/gen-cpp2/fsdb_oper_types.h"
#include "fboss/led_service/LedManager.h"

namespace facebook::fboss {

/*
 * subscribeToSwitchState
 *
 * This function subscribes the state callback to FSDB Port Info updates. The
 * callback will update the Led Manager synchronized port info map
 */
void FsdbSwitchStateSubscriber::subscribeToSwitchState(LedManager* ledManager) {
  subscribeToState(getSwitchStatePath(), ledManager);
}

/*
 * removeSwitchStateSubscription
 *
 * This function removes the switch state subscription from FSDB
 */
void FsdbSwitchStateSubscriber::removeSwitchStateSubscription() {
  removeStateSubscribe(getSwitchStatePath());
}

/*
 * subscribeToState
 *
 * A helper function to subscribe to the state callback to FSDB for updates on
 * a given path.
 */
void FsdbSwitchStateSubscriber::subscribeToState(
    std::vector<std::string> path,
    LedManager* ledManager) {
  auto stateCb = [](fsdb::FsdbStreamClient::State /*old*/,
                    fsdb::FsdbStreamClient::State /*new*/) {};
  auto dataCb = [=](fsdb::OperState&& state) {
    if (auto contents = state.contents()) {
      // Deserialize the FSDB update to switch state struct. This will be
      // used by LED manager thread later
      auto newSwitchStateData = apache::thrift::BinarySerializer::deserialize<
          fboss::state::SwitchState>(*contents);
      auto swPortMaps = newSwitchStateData.portMaps().value();

      if (ledManager) {
        for (auto& oneSwPortMap : swPortMaps) {
          auto switchPortMap = oneSwPortMap.second;
          folly::via(ledManager->getEventBase()).thenValue([&](auto&&) {
            ledManager->updateLedStatus(switchPortMap);
          });
        }
      } else {
        XLOG(ERR) << "Subscribed data came for invalid LED Manager";
      }
    }
  };
  pubSubMgr()->addStatePathSubscription(path, stateCb, dataCb);
  XLOG(INFO) << "LED Service Subscribed to FSDB switch state path";
}

/*
 * removeStateSubscribe
 *
 * This function removes the subscription from FSDB for the given FSDB state
 * path
 */
void FsdbSwitchStateSubscriber::removeStateSubscribe(
    std::vector<std::string> path) {
  pubSubMgr()->removeStatePathSubscription(path);
  XLOG(INFO) << "LED Service Removed from FSDB subscription";
}

} // namespace facebook::fboss
