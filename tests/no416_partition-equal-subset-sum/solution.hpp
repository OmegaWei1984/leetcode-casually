#include "common.hpp"

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        // 事先可以做出的判断
        size_t size = nums.size();
        if (size < 2) {
            return false;
        }
        int sum = 0;
        int max_num = 0;
        for (const auto &num : nums) {
            sum += num;
            max_num = max(max_num, num);
        }
        if (sum % 2 != 0) {
            return false;
        }
        int target = sum / 2;
        if (max_num > target) {
            return false;
        }
        // 动态规划
        vector<vector<bool>> dp(size, vector<bool>(target + 1, false));
        for (size_t i = 0; i < size; ++i) {
            dp[i][0] = true;
        }
        dp[0][nums[0]] = true;
        for (size_t i = 1; i < size; ++i) {
            for (size_t j = 1; j < target + 1; ++j) {
                if (j >= nums[i]) {
                    if (dp[i - 1][j] || dp[i - 1][j - nums[i]]) {
                        dp[i][j] = true;
                    }
                }
                else {
                    if (dp[i - 1][j]) {
                        dp[i][j] = true;
                    }
                }
            }
        }
        return dp[size - 1][target];
    }
};

