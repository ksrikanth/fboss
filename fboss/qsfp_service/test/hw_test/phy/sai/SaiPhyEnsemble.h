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

#include "fboss/qsfp_service/test/hw_test/phy/HwPhyEnsemble.h"

namespace facebook::fboss {

class PhyManager;

class SaiPhyEnsemble : public HwPhyEnsemble {
 public:
  SaiPhyEnsemble() {}

  ~SaiPhyEnsemble() override {}

  void init(std::unique_ptr<HwPhyEnsembleInitInfo> initInfo) override;

 private:
  std::unique_ptr<PhyManager> choosePhyManager() override;

  std::unique_ptr<MultiPimPlatformMapping> chooseMultiPimPlatformMapping()
      override;
};
} // namespace facebook::fboss
