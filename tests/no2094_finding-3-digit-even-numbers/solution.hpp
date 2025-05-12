#include "common.hpp"

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_set<int> nums;
        int n = digits.size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < n; ++k) {
                    if (i == j || j == k || k == i) {
                        continue;
                    }
                    int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                    if (num < 100 || num % 2 != 0) {
                        continue;
                    }
                    nums.insert(num);
                }
            }
        }
        vector<int> result;
        for (const auto num : nums) {
            result.push_back(num);
        }
        sort(result.begin(), result.end());
        return result;
    }
};
