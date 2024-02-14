/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/hw/sai/api/DebugCounterApi.h"
#include "fboss/agent/hw/sai/fake/FakeSai.h"
#include "fboss/agent/hw/sai/store/SaiObject.h"
#include "fboss/agent/hw/sai/store/SaiStore.h"

#include "fboss/agent/hw/sai/store/tests/SaiStoreTest.h"

using namespace facebook::fboss;

class DebugCounterStoreTest : public SaiStoreTest {
 public:
  SaiInPortDebugCounterTraits::CreateAttributes inCounterCreateAtts() const {
    return {
        SAI_DEBUG_COUNTER_TYPE_PORT_IN_DROP_REASONS,
        SAI_DEBUG_COUNTER_BIND_METHOD_AUTOMATIC,
        SaiInPortDebugCounterTraits::Attributes::DropReasons{
            {SAI_IN_DROP_REASON_BLACKHOLE_ROUTE}}};
  }
  DebugCounterSaiId createInDebugCounter() {
    return saiApiTable->debugCounterApi().create<SaiInPortDebugCounterTraits>(
        inCounterCreateAtts(), 0);
  }
};

TEST_F(DebugCounterStoreTest, loadInDebugCounter) {
  auto id = createInDebugCounter();

  SaiStore s(0);
  s.reload();
  auto& store = s.get<SaiInPortDebugCounterTraits>();

  SaiInPortDebugCounterTraits::AdapterHostKey k{inCounterCreateAtts()};
  auto got = store.get(k);
  EXPECT_NE(got, nullptr);
  EXPECT_EQ(got->adapterKey(), id);
}

TEST_F(DebugCounterStoreTest, debugCounterLoadCtor) {
  auto debugCounterId = createInDebugCounter();
  auto debugCounterObj = createObj<SaiInPortDebugCounterTraits>(debugCounterId);
  EXPECT_EQ(debugCounterObj.adapterKey(), debugCounterId);
  EXPECT_EQ(
      GET_OPT_ATTR(
          InPortDebugCounter, DropReasons, debugCounterObj.attributes()),
      SaiInPortDebugCounterTraits::Attributes::DropReasons{
          {SAI_IN_DROP_REASON_BLACKHOLE_ROUTE}}
          .value());
}

TEST_F(DebugCounterStoreTest, debugCounterCreateCtor) {
  auto attrs = inCounterCreateAtts();
  SaiInPortDebugCounterTraits::AdapterHostKey adapterHostKey = attrs;
  auto obj = createObj<SaiInPortDebugCounterTraits>(adapterHostKey, attrs, 0);
  auto outDropReasons = saiApiTable->debugCounterApi().getAttribute(
      obj.adapterKey(), SaiInPortDebugCounterTraits::Attributes::DropReasons{});
  EXPECT_EQ(
      outDropReasons,
      SaiInPortDebugCounterTraits::Attributes::DropReasons{
          {SAI_IN_DROP_REASON_BLACKHOLE_ROUTE}}
          .value());
}

TEST_F(DebugCounterStoreTest, serDeser) {
  auto id = createInDebugCounter();
  verifyAdapterKeySerDeser<SaiInPortDebugCounterTraits>({id});
}

TEST_F(DebugCounterStoreTest, toStr) {
  std::ignore = createInDebugCounter();
  verifyToStr<SaiInPortDebugCounterTraits>();
}
