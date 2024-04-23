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

#include <vector>

namespace facebook::fboss {
class SwSwitch;
class TestEnsembleIf;
class PortID;
class HwAsic;
class SwitchID;
class PortDescriptor;

namespace utility {

void verifyCopp(SwSwitch* sw, SwitchID switchId, PortID port);
void verifySafeDiagCmds(TestEnsembleIf* ensemble, const HwAsic* asic);
void verifyLoadBalance(
    SwSwitch* sw,
    int ecmpWidth,
    const std::vector<PortDescriptor>& ecmpPorts);

} // namespace utility
} // namespace facebook::fboss
