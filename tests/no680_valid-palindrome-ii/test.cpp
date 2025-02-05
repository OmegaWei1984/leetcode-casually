#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;
    string s = "aba";
    ASSERT_TRUE(solution.validPalindrome(s));
}

TEST(SolutionTest, Case2) {
    Solution solution;
    string s = "abca";
    ASSERT_TRUE(solution.validPalindrome(s));
}

TEST(SolutionTest, Case3) {
    Solution solution;
    string s = "abc";
    ASSERT_FALSE(solution.validPalindrome(s));
}

TEST(SolutionTest, Case4) {
    Solution solution;
    string s = "deeee";
    ASSERT_TRUE(solution.validPalindrome(s));
}

TEST(SolutionTest, Case5) {
    Solution solution;
    string s = "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga";
    ASSERT_TRUE(solution.validPalindrome(s));
}
