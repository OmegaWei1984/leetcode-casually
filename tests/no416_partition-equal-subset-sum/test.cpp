#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;

    vector<int> nums = {1,5,11,5};
    ASSERT_TRUE(solution.canPartition(nums));
}

TEST(SolutionTest, Case2) {
    Solution solution;

    vector<int> nums = {1,2,3,5};
    ASSERT_FALSE(solution.canPartition(nums));
}

TEST(SolutionTest, Case3) {
    Solution solution;

    vector<int> nums = {1,5,10,6};
    ASSERT_TRUE(solution.canPartition(nums));
}
