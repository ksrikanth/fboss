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

#include "fboss/agent/types.h"

namespace facebook::fboss {
class HwAsic;
class SwSwitch;

namespace utility {
SwitchID getFirstSwitchId(SwSwitch* sw);
const HwAsic* getFirstAsic(SwSwitch* sw);
} // namespace utility
} // namespace facebook::fboss
