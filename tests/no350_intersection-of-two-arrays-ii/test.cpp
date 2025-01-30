#include <gtest/gtest.h>

#include "common.hpp"
#include "solution.hpp"

TEST(SolutionTest, Case1) {
    Solution solution;
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    vector<int> result = solution.intersect(nums1, nums2);
    vector<int> result2 = solution.intersect2(nums1, nums2);
    sort(result.begin(), result.end());
    sort(result2.begin(), result2.end());
    vector<int> ans = {2,2};
    ASSERT_EQ(result, ans);
    ASSERT_EQ(result2, ans);
}

TEST(SolutionTest, Case2) {
    Solution solution;
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    vector<int> result = solution.intersect(nums1, nums2);
    vector<int> result2 = solution.intersect2(nums1, nums2);
    sort(result.begin(), result.end());
    sort(result2.begin(), result2.end());
    vector<int> ans = {4,9};
    ASSERT_EQ(result, ans);
    ASSERT_EQ(result2, ans);
}
