#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;
    vector<int> arr = {2,6,4,1};
    ASSERT_FALSE(solution.threeConsecutiveOdds(arr));
}

TEST(SolutionTest, Case2) {
    Solution solution;
    vector<int> arr = {1,2,34,3,4,5,7,23,12};
    ASSERT_TRUE(solution.threeConsecutiveOdds(arr));
}
