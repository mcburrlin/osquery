
/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under both the Apache 2.0 license (found in the
 *  LICENSE file in the root directory of this source tree) and the GPLv2 (found
 *  in the COPYING file in the root directory of this source tree).
 *  You may select, at your option, one of the above-listed licenses.
 */

// Sanity check integration test for docker_container_stats
// Spec file: specs/posix/docker_container_stats.table

#include <osquery/tests/integration/tables/helper.h>

namespace osquery {

class dockerContainerStats : public IntegrationTableTest {};

TEST_F(dockerContainerStats, test_sanity) {
  // 1. Query data
  // QueryData data = execute_query("select * from docker_container_stats");
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See IntegrationTableTest.cpp for avaialbe flags
  // Or use custom DataCheck object
  // ValidatatioMap row_map = {
  //      {"id", NormalType}
  //      {"name", NormalType}
  //      {"pids", IntType}
  //      {"read", IntType}
  //      {"preread", IntType}
  //      {"interval", IntType}
  //      {"disk_read", IntType}
  //      {"disk_write", IntType}
  //      {"num_procs", IntType}
  //      {"cpu_total_usage", IntType}
  //      {"cpu_kernelmode_usage", IntType}
  //      {"cpu_usermode_usage", IntType}
  //      {"system_cpu_usage", IntType}
  //      {"online_cpus", IntType}
  //      {"pre_cpu_total_usage", IntType}
  //      {"pre_cpu_kernelmode_usage", IntType}
  //      {"pre_cpu_usermode_usage", IntType}
  //      {"pre_system_cpu_usage", IntType}
  //      {"pre_online_cpus", IntType}
  //      {"memory_usage", IntType}
  //      {"memory_max_usage", IntType}
  //      {"memory_limit", IntType}
  //      {"network_rx_bytes", IntType}
  //      {"network_tx_bytes", IntType}
  //}
  // 4. Perform validation
  // EXPECT_TRUE(validate_rows(data, row_map));
}

} // namespace osquery
