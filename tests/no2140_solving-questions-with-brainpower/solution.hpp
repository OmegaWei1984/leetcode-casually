#include "common.hpp"

class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int size = questions.size();
        vector<long long> dp(size + 1, 0);
        for (int i = size - 1; i >= 0; --i) {
            dp[i] = max(
                dp[i + 1],
                questions[i][0] + dp[min(size, i + 1 + questions[i][1])]
            );
        }
        return dp[0];
    }
};

