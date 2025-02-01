#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;
    vector<char> s = {'h','e','l','l','o'};
    vector<char> ans = {'o','l','l','e','h'};
    solution.reverseString(s);
    ASSERT_EQ(s, ans);
}

TEST(SolutionTest, Case2) {
    Solution solution;
    vector<char> s = {'H','a','n','n','a','h'};
    vector<char> ans = {'h','a','n','n','a','H'};
    solution.reverseString(s);
    ASSERT_EQ(s, ans);
}
