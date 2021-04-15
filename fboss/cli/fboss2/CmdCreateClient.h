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

#include "fboss/cli/fboss2/CLI11/CLI.hpp"

#include <memory>

namespace facebook::fboss {

class CmdCreateClient {
 public:
  CmdCreateClient() = default;
  ~CmdCreateClient() = default;
  CmdCreateClient(const CmdCreateClient& other) = delete;
  CmdCreateClient& operator=(const CmdCreateClient& other) = delete;

  // Static function for getting the CmdCreateClient folly::Singleton
  static std::shared_ptr<CmdCreateClient> getInstance();
};

} // namespace facebook::fboss
