#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;
    vector<vector<int>> questions = {{3,2},{4,3},{4,4},{2,5}};
    int result = 5;
    ASSERT_EQ(result, solution.mostPoints(questions));
}

TEST(SolutionTest, Case2) {
    Solution solution;
    vector<vector<int>> questions = {{1,1},{2,2},{3,3},{4,4},{5,5}};
    int result = 7;
    ASSERT_EQ(result, solution.mostPoints(questions));
}
