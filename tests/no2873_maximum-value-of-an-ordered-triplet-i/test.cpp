#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;
    vector<int> nums = {12,6,1,2,7};
    long long result = 77;
    ASSERT_EQ(result, solution.maximumTripletValue(nums));
}

TEST(SolutionTest, Case2) {
    Solution solution;
    vector<int> nums = {1,10,3,4,19};
    long long result = 133;
    ASSERT_EQ(result, solution.maximumTripletValue(nums));
}

TEST(SolutionTest, Case3) {
    Solution solution;
    vector<int> nums = {1,2,3};
    long long result = 0;
    ASSERT_EQ(result, solution.maximumTripletValue(nums));
}

TEST(SolutionTest, Case4) {
    Solution solution;
    vector<int> nums = {8,6,3,13,2,12,19,5,19,6,10,11,9};
    long long result = 266;
    ASSERT_EQ(result, solution.maximumTripletValue(nums));
}
