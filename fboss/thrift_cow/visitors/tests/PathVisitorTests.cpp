// (c) Facebook, Inc. and its affiliates. Confidential and proprietary.

#include <folly/String.h>
#include <folly/dynamic.h>
#include <folly/logging/xlog.h>
#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <fboss/thrift_cow/visitors/PathVisitor.h>
#include <fboss/thrift_cow/visitors/tests/VisitorTestUtils.h>
#include <thrift/lib/cpp2/reflection/folly_dynamic.h>
#include "fboss/agent/gen-cpp2/switch_config_types.h"
#include "fboss/thrift_cow/nodes/Types.h"
#include "fboss/thrift_cow/nodes/tests/gen-cpp2/test_fatal_types.h"

namespace facebook::fboss::thrift_cow::test {

TEST(PathVisitorTests, AccessField) {
  auto structA = createSimpleTestStruct();

  auto nodeA = std::make_shared<ThriftStructNode<TestStruct>>(structA);
  folly::dynamic dyn;
  auto processPath = [&dyn](auto& node, auto begin, auto end) {
    EXPECT_EQ(begin, end);
    dyn = node.toFollyDynamic();
  };
  std::vector<std::string> path{"inlineInt"};
  auto result = RootPathVisitor::visit(
      *nodeA, path.begin(), path.end(), PathVisitMode::LEAF, processPath);
  EXPECT_EQ(result, ThriftTraverseResult::OK);
  EXPECT_EQ(dyn.asInt(), 54);

  path = {"2"};
  result = RootPathVisitor::visit(
      *nodeA, path.begin(), path.end(), PathVisitMode::LEAF, processPath);
  EXPECT_EQ(result, ThriftTraverseResult::OK);
  EXPECT_EQ(dyn.asInt(), 54);

  // inlineVariant/inlineInt
  path = {"21", "2"};
  result = RootPathVisitor::visit(
      *nodeA, path.begin(), path.end(), PathVisitMode::LEAF, processPath);
  EXPECT_EQ(result, ThriftTraverseResult::OK);
  EXPECT_EQ(dyn.asInt(), 99);
}

TEST(PathVisitorTests, AccessFieldInContainer) {
  auto structA = createSimpleTestStruct();
  auto nodeA = std::make_shared<ThriftStructNode<TestStruct>>(structA);

  cfg::L4PortRange got;
  auto processPath = [&got](auto& node, auto begin, auto end) {
    EXPECT_EQ(begin, end);
    got = apache::thrift::from_dynamic<cfg::L4PortRange>(
        node.toFollyDynamic(), apache::thrift::dynamic_format::JSON_1);
  };

  std::vector<std::string> path{"mapOfEnumToStruct", "3"};
  auto result = RootPathVisitor::visit(
      *nodeA, path.begin(), path.end(), PathVisitMode::LEAF, processPath);
  EXPECT_EQ(result, ThriftTraverseResult::OK);
  EXPECT_EQ(*got.min(), 100);
  EXPECT_EQ(*got.max(), 200);

  path = {"15", "3"};
  result = RootPathVisitor::visit(
      *nodeA, path.begin(), path.end(), PathVisitMode::LEAF, processPath);
  EXPECT_EQ(result, ThriftTraverseResult::OK);
  EXPECT_EQ(*got.min(), 100);
  EXPECT_EQ(*got.max(), 200);
}

TEST(PathVisitorTests, TraversalModeFull) {
  auto structA = createSimpleTestStruct();
  auto nodeA = std::make_shared<ThriftStructNode<TestStruct>>(structA);

  std::set<std::string> got;
  auto processPath = [&got](auto& node, auto begin, auto end) {
    got.insert("/" + folly::join('/', std::vector<std::string>(begin, end)));
  };
  std::vector<std::string> path{"mapOfEnumToStruct", "3"};
  auto result = RootPathVisitor::visit(
      *nodeA, path.begin(), path.end(), PathVisitMode::FULL, processPath);
  EXPECT_EQ(result, ThriftTraverseResult::OK);
  EXPECT_THAT(
      got,
      ::testing::ContainerEq(
          std::set<std::string>{"/", "/3", "/mapOfEnumToStruct/3"}));
}

TEST(PathVisitorTests, AccessOptional) {
  auto structA = createSimpleTestStruct();
  auto nodeA = std::make_shared<ThriftStructNode<TestStruct>>(structA);

  std::string got;
  auto processPath = [&got](auto& node, auto begin, auto end) {
    EXPECT_EQ(begin, end);
    got = node.toFollyDynamic().asString();
  };

  std::vector<std::string> path{"optionalString"};
  auto result = RootPathVisitor::visit(
      *nodeA, path.begin(), path.end(), PathVisitMode::LEAF, processPath);
  EXPECT_EQ(result, ThriftTraverseResult::OK);
  EXPECT_EQ(got, "bla");
  structA.optionalString().reset();
  nodeA = std::make_shared<ThriftStructNode<TestStruct>>(structA);

  got.clear();
  result = RootPathVisitor::visit(
      *nodeA, path.begin(), path.end(), PathVisitMode::LEAF, processPath);
  EXPECT_EQ(result, ThriftTraverseResult::NON_EXISTENT_NODE);
  EXPECT_TRUE(got.empty());
}

struct GetEncodedOperator
    : public facebook::fboss::thrift_cow::BasePathVisitorOperator {
  void visit(facebook::fboss::thrift_cow::Serializable& node) override {
    val = node.encode(fsdb::OperProtocol::SIMPLE_JSON);
  }

  folly::fbstring val{};
};

struct SetEncodedOperator
    : public facebook::fboss::thrift_cow::BasePathVisitorOperator {
  explicit SetEncodedOperator(folly::fbstring val) : val_(val) {}

  void visit(facebook::fboss::thrift_cow::Serializable& node) override {
    node.fromEncoded(fsdb::OperProtocol::SIMPLE_JSON, val_);
  }

 private:
  folly::fbstring val_{};
};

TEST(PathVisitorTests, VisitWithOperators) {
  auto structA = createSimpleTestStruct();
  structA.setOfI32() = {1};

  auto nodeA = std::make_shared<ThriftStructNode<TestStruct>>(structA);

  std::vector<std::string> path{"inlineInt"};

  SetEncodedOperator setOp("123");
  auto result = RootPathVisitor::visit(
      *nodeA, path.begin(), path.end(), PathVisitMode::LEAF, setOp);
  EXPECT_EQ(result, ThriftTraverseResult::OK);

  GetEncodedOperator getOp;
  result = RootPathVisitor::visit(
      *nodeA, path.begin(), path.end(), PathVisitMode::LEAF, getOp);
  EXPECT_EQ(result, ThriftTraverseResult::OK);
  EXPECT_EQ(getOp.val, "123");

  std::vector<std::string> path2{"setOfI32", "1"};
  result = RootPathVisitor::visit(
      *nodeA, path2.begin(), path2.end(), PathVisitMode::LEAF, setOp);
  // should throw trying to set an immutable node
  EXPECT_EQ(result, ThriftTraverseResult::VISITOR_EXCEPTION);
}

} // namespace facebook::fboss::thrift_cow::test
