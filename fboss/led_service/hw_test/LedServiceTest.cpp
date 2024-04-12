/*
 *  Copyright (c) 2004-present, Meta Platforms, Inc. and affiliates.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include <gtest/gtest.h>

#include <thrift/lib/cpp2/async/RocketClientChannel.h>
#include <thrift/lib/cpp2/protocol/Serializer.h>
#include "common/init/Init.h"
#include "fboss/agent/EnumUtils.h"
#include "fboss/led_service/LedManager.h"
#include "fboss/led_service/hw_test/LedServiceTest.h"

namespace facebook::fboss {

DEFINE_int32(visual_delay_sec, 0, "Add a delay to enable seeing LED change");

void LedServiceTest::SetUp() {
  // Create ensemble and initialize it
  ensemble_ = std::make_unique<LedEnsemble>();
  ensemble_->init();

  // Check if the LED manager is created correctly, the config file is loaded
  // and the LED is managed by service now
  ledManager_ = getLedEnsemble()->getLedManager();
  CHECK_NE(ledManager_, nullptr);
  CHECK(ledManager_->isLedControlledThroughService());
  platformMap_ = ledManager_->getPlatformMapping();
  CHECK_NE(platformMap_, nullptr);
}

void LedServiceTest::TearDown() {
  // Remove ensemble and objects contained there
  ensemble_.reset();
  ledManager_ = nullptr;
  platformMap_ = nullptr;
}

std::vector<TransceiverID> LedServiceTest::getAllTransceivers(
    const PlatformMapping* platformMapping) const {
  std::vector<TransceiverID> transceivers;
  const auto& chips = platformMapping->getChips();
  for (auto chip : chips) {
    if (*chip.second.type() == phy::DataPlanePhyChipType::TRANSCEIVER) {
      auto tcvrID = TransceiverID(*chip.second.physicalID());
      transceivers.push_back(tcvrID);
    }
  }
  return transceivers;
}

/*
 * Set the LED state by updating the LED manager and check if the LED color
 * changes accordingly
 */
TEST_F(LedServiceTest, checkLedColorChange) {
  // Test for all the modules
  // Use the ports max speed and profile
  auto transceivers = getAllTransceivers(platformMap_);
  std::sort(transceivers.begin(), transceivers.end());

  for (auto tcvr : transceivers) {
    auto swPorts = platformMap_->getSwPortListFromTransceiverId(tcvr);
    CHECK_GT(swPorts.size(), 0);
    auto swPort = swPorts[0];
    auto swPortName = platformMap_->getPortNameByPortId(swPort);
    CHECK(swPortName.has_value());

    // The setExternalLedState will throw because first update from FSDB has not
    // happened to the LedManager
    EXPECT_THROW(
        ledManager_->setExternalLedState(
            swPort, PortLedExternalState::EXTERNAL_FORCE_OFF),
        FbossError);

    // Do the first update from FSDB to LedService
    auto maxSpeed = platformMap_->getPortMaxSpeed(swPort);
    auto profile = platformMap_->getProfileIDBySpeed(swPort, maxSpeed);
    LedManager::LedSwitchStateUpdate ledUpdate = {
        static_cast<short>(swPort),
        "",
        enumToName<cfg::PortProfileID>(profile),
        false};

    std::map<short, LedManager::LedSwitchStateUpdate> switchUpdate_0;
    switchUpdate_0[swPort] = ledUpdate;
    ledManager_->updateLedStatus(switchUpdate_0);

    // Now the setting of external LED state should be successful
    EXPECT_NO_THROW(ledManager_->setExternalLedState(
        swPort, PortLedExternalState::EXTERNAL_FORCE_OFF));

    // Verify link Down, the expected LED color is OFF
    auto offLedColor = ledManager_->getCurrentLedColor(swPort);
    auto ledState = ledManager_->getLedState(swPortName.value());
    EXPECT_EQ(offLedColor, led::LedColor::OFF);
    EXPECT_EQ(ledState.currentLedColor().value(), led::LedColor::OFF);
    EXPECT_TRUE(ledState.forcedOffState().value());

    // Verify link Up, the expected LED color is either Blue or Green
    ledManager_->setExternalLedState(
        swPort, PortLedExternalState::EXTERNAL_FORCE_ON);
    auto onLedColorCurrent = ledManager_->getCurrentLedColor(swPort);
    auto onLedColorExpected = ledManager_->forcedOnColor();
    ledState = ledManager_->getLedState(swPortName.value());
    EXPECT_EQ(onLedColorCurrent, onLedColorExpected);
    EXPECT_EQ(ledState.currentLedColor().value(), onLedColorExpected);
    EXPECT_TRUE(ledState.forcedOnState().value());

    // If the flags is specified, add a delay before forcing LED off
    // to enable seeing the LED change
    sleep(FLAGS_visual_delay_sec);

    // Put it back to Off state and check again
    ledManager_->setExternalLedState(
        swPort, PortLedExternalState::EXTERNAL_FORCE_OFF);
    offLedColor = ledManager_->getCurrentLedColor(swPort);
    ledState = ledManager_->getLedState(swPortName.value());
    EXPECT_EQ(offLedColor, led::LedColor::OFF);
    EXPECT_EQ(ledState.currentLedColor().value(), led::LedColor::OFF);
    EXPECT_TRUE(ledState.forcedOffState().value());
  }
}

} // namespace facebook::fboss

int main(int argc, char* argv[]) {
  // Parse command line flags
  testing::InitGoogleTest(&argc, argv);

  facebook::initFacebook(&argc, &argv);

  return RUN_ALL_TESTS();
}
