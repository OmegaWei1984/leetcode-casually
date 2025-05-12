#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;
    vector<int> digits = {2,1,3,0};
    vector<int> ans = {102,120,130,132,210,230,302,310,312,320};
    sort(ans.begin(), ans.end());
    vector<int> result = solution.findEvenNumbers(digits);
    sort(result.begin(), result.end());
    ASSERT_EQ(ans, result);
}

TEST(SolutionTest, Case2) {
    Solution solution;
    vector<int> digits = {2,2,8,8,2};
    vector<int> ans = {222,228,282,288,822,828,882};
    sort(ans.begin(), ans.end());
    vector<int> result = solution.findEvenNumbers(digits);
    sort(result.begin(), result.end());
    ASSERT_EQ(ans, result);
}

TEST(SolutionTest, Case3) {
    Solution solution;
    vector<int> digits = {3,7,5};
    vector<int> result = solution.findEvenNumbers(digits);
    vector<int> ans{};
    ASSERT_EQ(ans, result);
}
