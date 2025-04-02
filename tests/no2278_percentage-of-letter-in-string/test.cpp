#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;
    string s = "foobar";
    char letter = 'o';
    int result = 33;
    ASSERT_EQ(result, solution.percentageLetter(s, letter));
}

TEST(SolutionTest, Case2) {
    Solution solution;
    string s = "jjjj";
    char letter = 'k';
    int result = 0;
    ASSERT_EQ(result, solution.percentageLetter(s, letter));
}
