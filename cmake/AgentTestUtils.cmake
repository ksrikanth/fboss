# CMake to build libraries and binaries in fboss/agent/test

# In general, libraries and binaries in fboss/foo/bar are built by
# cmake/FooBar.cmake

add_library(agent_test_acl_utils
  fboss/agent/test/utils/AgentTestAclUtils.cpp
)

target_link_libraries(agent_test_acl_utils
  fboss_error
  switch_config_cpp2
  switch_state_cpp2
)

add_library(agent_test_copp_utils
  fboss/agent/test/utils/AgentTestCoppUtils.cpp
)

target_link_libraries(agent_test_copp_utils
  switch_asics
  packet_factory
  Folly::folly
  resourcelibutil
  switch_config_cpp2
  ${GTEST}
  ${LIBGMOCK_LIBRARIES}
)
