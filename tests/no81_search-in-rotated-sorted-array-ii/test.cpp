#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;
    vector<int> nums = {2,5,6,0,0,1,2};
    int target = 0;
    ASSERT_TRUE(solution.search(nums, target));
}

TEST(SolutionTest, Case2) {
    Solution solution;
    vector<int> nums = {2,5,6,0,0,1,2};
    int target = 3;
    ASSERT_FALSE(solution.search(nums, target));
}

TEST(SolutionTest, Case3) {
    Solution solution;
    vector<int> nums = {1,0,1,1,1};
    int target = 0;
    ASSERT_TRUE(solution.search(nums, target));
}


TEST(SolutionTest, Case4) {
    Solution solution;
    vector<int> nums = {1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1};
    int target = 2;
    ASSERT_TRUE(solution.search(nums, target));
}

TEST(SolutionTest, Case5) {
    Solution solution;
    vector<int> nums = {1,1,1,1,1,1,1,1,1,13,1,1,1,1,1,1,1,1,1,1,1,1};
    int target = 13;
    ASSERT_TRUE(solution.search(nums, target));
}

TEST(SolutionTest, Case6) {
    Solution solution;
    vector<int> nums = {1,3};
    int target = 3;
    ASSERT_TRUE(solution.search(nums, target));
}

TEST(SolutionTest, Case7) {
    Solution solution;
    vector<int> nums = {3,5,1};
    int target = 1;
    ASSERT_TRUE(solution.search(nums, target));
}
