#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    string s("LeetcodeHelpsMeLearn");
    Solution solution;
    vector<int> spaces = {8, 13, 15};
    ASSERT_EQ("Leetcode Helps Me Learn", solution.addSpaces(s, spaces));
}

TEST(SolutionTest, Case2) {
    string s("icodeinpython");
    Solution solution;
    vector<int> spaces = {1,5,7,9};
    ASSERT_EQ("i code in py thon", solution.addSpaces(s, spaces));
}

TEST(SolutionTest, Case3) {
    string s("spacing");
    Solution solution;
    vector<int> spaces = {0,1,2,3,4,5,6};
    ASSERT_EQ(" s p a c i n g", solution.addSpaces(s, spaces));
}
