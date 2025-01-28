#include "common.hpp"

class Solution {
public:
    int jump(vector<int>& nums) {
        int result = 0;
        int idx = 0;
        int right = 0;
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (i + nums[i] > idx) {
                idx = i + nums[i] ;
            }
            if (i == right) {
                right = idx;
                result++;
            }
        }
        return result;
    }
};