#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;
    string s = "abcdefg";
    int k = 2;
    string ans = "bacdfeg";
    ASSERT_EQ(solution.reverseStr(s, k), ans);
}

TEST(SolutionTest, Case2) {
    Solution solution;
    string s = "abcd";
    int k = 2;
    string ans = "bacd";
    ASSERT_EQ(solution.reverseStr(s, k), ans);
}
