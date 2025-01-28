#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;
    vector<int> result = solution.getRow(3);
    vector<int> answer = {1,3,3,1};
    ASSERT_EQ(result, answer);
    vector<int> result2 = solution.getRow2(3);
    ASSERT_EQ(result2, answer);
}