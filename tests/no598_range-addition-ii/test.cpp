#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;
    int m = 3;
    int n = 2;
    vector<vector<int>> ops = {{2,2},{3,3}};
    ASSERT_EQ(solution.maxCount(m, n, ops), 4);
}

TEST(SolutionTest, Case2) {
    Solution solution;
    int m = 3;
    int n = 3;
    vector<vector<int>> ops = {{2,2},{3,3},{3,3},{3,3},{2,2},{3,3},{3,3},{3,3},{2,2},{3,3},{3,3},{3,3}};
    ASSERT_EQ(solution.maxCount(m, n, ops), 4);
}

TEST(SolutionTest, Case3) {
    Solution solution;
    int m = 3;
    int n = 3;
    vector<vector<int>> ops = {{}};
    ASSERT_EQ(solution.maxCount(m, n, ops), 9);
}
