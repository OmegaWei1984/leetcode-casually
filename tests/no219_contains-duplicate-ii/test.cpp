#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;
    vector<int> nums = {1,2,3,1};
    int k = 3;
    ASSERT_TRUE(solution.containsNearbyDuplicate(nums, k));
    ASSERT_TRUE(solution.containsNearbyDuplicate2(nums, k));
}

TEST(SolutionTest, Case2) {
    Solution solution;
    vector<int> nums = {1,0,1,1};
    int k = 1;
    ASSERT_TRUE(solution.containsNearbyDuplicate(nums, k));
    ASSERT_TRUE(solution.containsNearbyDuplicate2(nums, k));
}

TEST(SolutionTest, Case3) {
    Solution solution;
    vector<int> nums = {1,2,3,1,2,3};
    int k = 2;
    ASSERT_FALSE(solution.containsNearbyDuplicate(nums, k));
    ASSERT_FALSE(solution.containsNearbyDuplicate2(nums, k));
}