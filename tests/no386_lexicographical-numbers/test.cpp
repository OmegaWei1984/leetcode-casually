#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;
    int n = 13;
    vector<int> ans = {1,10,11,12,13,2,3,4,5,6,7,8,9}; 
    ASSERT_EQ(solution.lexicalOrder(n), ans);
}

TEST(SolutionTest, Case2) {
    Solution solution;
    int n = 2;
    vector<int> ans = {1,2}; 
    ASSERT_EQ(solution.lexicalOrder(n), ans);
}