#include "common.hpp"

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result{};
        unordered_map<int, int> nums1_times;
        unordered_map<int, int> nums2_times;
        for (const int &num : nums1) {
            nums1_times[num]++;
        }
        for (const int &num : nums2) {
            nums2_times[num]++;
        }
        bool is_nums1_smaller = nums1_times.size() < nums2_times.size();
        const auto& nums_small = is_nums1_smaller ? nums1_times : nums2_times;
        const auto& nums_big = is_nums1_smaller ? nums2_times : nums1_times;
        for (const auto &it : nums_small) {
            if (nums_big.find(it.first) != nums_big.cend() && nums_big.at(it.first)) {
                result.insert(result.end(), min(nums_big.at(it.first), it.second), it.first);
            }
        }
        return result;
    }

    vector<int> intersect2(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result{};
        int idx1 = 0;
        int idx2 = 0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while (idx1 < nums1.size() && idx2 < nums2.size()) {
            if (nums1[idx1] > nums2[idx2]) {
                idx2++;
            }
            else if (nums1[idx1] < nums2[idx2]) {
                idx1++;
            }
            else {
                result.emplace_back(nums1[idx1]);
                idx1++;
                idx2++;
            }
        }
        return result;
    }
};
