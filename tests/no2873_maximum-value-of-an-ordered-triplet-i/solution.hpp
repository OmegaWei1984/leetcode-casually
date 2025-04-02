#include "common.hpp"

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long result = 0;
        long long i = nums[0];
        long long diff = i - nums[1];
        size_t size = nums.size();
        for (size_t j = 2; j < size; ++j) {
            i = max(i, static_cast<long long>(nums[j - 2]));
            diff = max(diff, i - nums[j - 1]);
            result = max(result, diff * nums[j]);
        }
        return result;
    }
};
