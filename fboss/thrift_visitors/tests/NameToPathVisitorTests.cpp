// (c) Facebook, Inc. and its affiliates. Confidential and proprietary.

#include <folly/Demangle.h>
#include <folly/String.h>
#include <folly/logging/xlog.h>
#include <gtest/gtest.h>

#include <fboss/thrift_visitors/NameToPathVisitor.h>
// @lint-ignore CLANGTIDY
#include "fboss/fsdb/tests/gen-cpp2-thriftpath/thriftpath_test.h" // @manual=//fboss/fsdb/tests:thriftpath_test_thrift-cpp2-thriftpath
#include "fboss/fsdb/tests/gen-cpp2/thriftpath_test_types.h"

using namespace facebook::fboss::fsdb;
using namespace thriftpath;
TEST(NameToPathVisitorTests, TraverseOk) {
  RootThriftPath<TestStruct> root;

  std::vector<std::vector<std::string>> paths = {
      {"tx"},
      {"rx"},
      {"name"},
      {"member"},
      {"member", "min"},
      {"member", "max"},
      {"structMap"},
      {"structMap", "0"},
      {"structMap", "0", "min"},
      {"structMap", "0", "max"},
      {"integralSet"},
      {"integralSet", "0"},
      {"integralSet", "1"},
      {"optionalString"},
      {"variantMember"},
      {"variantMember", "integral"},
      {"variantMember", "boolean"},
      {"variantMember", "str"},
      {"structList"},
      {"structList", "0"},
      {"structList", "0", "min"},
      {"structList", "0", "max"},
      {"enumMap"},
      {"enumMap", "1"},
      {"enumMap", "1", "min"},
      {"enumMap", "1", "max"},
      {"enumMap", "FIRST"},
      {"enumMap", "FIRST", "min"},
      {"enumMap", "FIRST", "max"},
      {"enumSet"},
      {"enumSet", "1"},
      {"enumSet", "FIRST"},
      {"enumeration"},
      // using ids
      {"1"}, // tx
      {"2"}, // rx
      {"3"}, // name
      {"4"}, // member
      {"4", "1"}, // member/min
      {"4", "2"}, // member/max
      {"7", "1"}, // variantMember/integral
      {"7", "2"}, // variantMember/boolean
      {"7", "3"}, // variantMember/str
  };

  for (auto& path : paths) {
    auto result = RootNameToPathVisitor<RootThriftPath<TestStruct>>::visit(
        root, path.begin(), path.begin(), path.end(), [&]<class Tag>(Tag) {
          using ThriftTag = typename Tag::Tag;
          using DataType = typename Tag::DataT;

          XLOG(INFO) << " For path : " << folly::join('/', path)
                     << " got thrift tag :"
                     << folly::demangle(typeid(ThriftTag))
                     << " data type: " << folly::demangle(typeid(DataType));
        });
    EXPECT_EQ(result, NameToPathResult::OK)
        << "Failed path: /" + folly::join('/', path);
  }
}

TEST(NameToPathVisitorTests, TraverseNotOk) {
  RootThriftPath<TestStruct> root;

  std::vector<std::vector<std::string>> paths = {
      {"foo"},
      {"/", "foo"},
      {"foo", "bar"},
      // Cannot start at a nested root
      {"max"},
      {"10000"}, // invalid id
      {"7", "1000"}, // variantMember/<invalid id>
  };
  for (auto& path : paths) {
    auto result = RootNameToPathVisitor<RootThriftPath<TestStruct>>::visit(
        root, path.begin(), path.begin(), path.end(), [&](auto /*resolved*/) {
          EXPECT_FALSE(true) << " Should never be called";
        });
    EXPECT_NE(result, NameToPathResult::OK);
  }
}

TEST(NameToPathVisitorTests, AlternateRoots) {
  RootThriftPath<TestStructSimple> testStructSimpleRoot;

  std::vector<std::vector<std::string>> paths = {
      {"min"},
      {"max"},
  };
  for (auto& path : paths) {
    auto result =
        RootNameToPathVisitor<RootThriftPath<TestStructSimple>>::visit(
            testStructSimpleRoot,
            path.begin(),
            path.begin(),
            path.end(),
            [&]<class Tag>(Tag) {
              using ThriftTag = typename Tag::Tag;
              using DataType = typename Tag::DataT;

              XLOG(INFO) << " For path : " << folly::join('/', path)
                         << " got thrift tag :"
                         << folly::demangle(typeid(ThriftTag))
                         << " data type: " << folly::demangle(typeid(DataType));
            });
    EXPECT_EQ(result, NameToPathResult::OK)
        << "Failed path: /" + folly::join('/', path);
  }
}

TEST(NameToPathVisitorTests, NameAndIds) {
  RootThriftPath<TestStruct> testStructRoot;

  // both resolve to the same path
  std::vector<std::vector<std::string>> paths = {
      {"member", "min"},
      {"4", "1"},
  };
  for (auto& path : paths) {
    auto result = RootNameToPathVisitor<RootThriftPath<TestStruct>>::visit(
        testStructRoot,
        path.begin(),
        path.begin(),
        path.end(),
        [&](auto resolved) {
          EXPECT_EQ(
              resolved.tokens(), std::vector<std::string>({"member", "min"}));
          EXPECT_EQ(resolved.idTokens(), std::vector<std::string>({"4", "1"}));
        });
    EXPECT_EQ(result, NameToPathResult::OK)
        << "Failed path: /" + folly::join('/', path);
  }
}
