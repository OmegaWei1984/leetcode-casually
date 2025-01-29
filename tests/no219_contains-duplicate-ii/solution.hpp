#include "common.hpp"

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            unordered_map<int, int>::iterator it = map.find(num);
            if (it == map.end()) {
                map[num] = i;
            }
            else
            {
                if (abs(it->second - i) <= k)
                {
                    return true;
                }
                map[num] = i;
            }
        }
        return false;
    }

    bool containsNearbyDuplicate2(vector<int>& nums, int k) {
        unordered_set<int> nums_set;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > k) {
                nums_set.erase(nums[i - k - 1]);
            }
            if (nums_set.count(nums[i])) {
                return true;
            }
            nums_set.emplace(nums[i]);
        }
        return false;
    }
};