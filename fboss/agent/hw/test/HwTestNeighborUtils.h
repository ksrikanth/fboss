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

#include <folly/IPAddress.h>
#include <string>

namespace facebook::fboss {
class HwSwitch;
namespace utility {

bool nbrProgrammedToCpu(const HwSwitch* hwSwitch, const folly::IPAddress& ip);
std::optional<uint32_t> getNbrClassId(
    const HwSwitch* hwSwitch,
    const folly::IPAddress& ip);
} // namespace utility
} // namespace facebook::fboss
