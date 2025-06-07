#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;
    string s = "aaba*";
    string ans = "aab";
    ASSERT_EQ(solution.clearStars(s), ans);
}

TEST(SolutionTest, Case2) {
    Solution solution;
    string s = "abc";
    string ans = "abc";
    ASSERT_EQ(solution.clearStars(s), ans);
}