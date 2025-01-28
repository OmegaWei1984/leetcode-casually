#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;
    vector<int> nums = {2,3,1,1,4}; 
    ASSERT_EQ(solution.jump(nums), 2);
}

TEST(SolutionTest, Case2) {
    Solution solution;
    vector<int> nums = {2,3,0,1,4}; 
    ASSERT_EQ(solution.jump(nums), 2);
}

TEST(SolutionTest, Case3) {
    Solution solution;
    vector<int> nums = {1, 2, 3}; 
    ASSERT_EQ(solution.jump(nums), 2);
}

TEST(SolutionTest, Case4) {
    Solution solution;
    vector<int> nums = {1, 1, 1, 1}; 
    ASSERT_EQ(solution.jump(nums), 3);
}

TEST(SolutionTest, Case5) {
    Solution solution;
    vector<int> nums = {1, 3, 2}; 
    ASSERT_EQ(solution.jump(nums), 2);
}

TEST(SolutionTest, Case6) {
    Solution solution;
    vector<int> nums = {3, 2, 1}; 
    ASSERT_EQ(solution.jump(nums), 1);
}

TEST(SolutionTest, Case7) {
    Solution solution;
    vector<int> nums = {2, 3, 1}; 
    ASSERT_EQ(solution.jump(nums), 1);
}

TEST(SolutionTest, Case8) {
    Solution solution;
    vector<int> nums = {1,2,1,1,1}; 
    ASSERT_EQ(solution.jump(nums), 3);
}