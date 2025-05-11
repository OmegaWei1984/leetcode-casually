#include "common.hpp"

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int counter = 0;
        for (const auto &num : arr) {
            if (num % 2 != 0) {
                if (++counter == 3) {
                    return true;
                }
                // nothing to do
            }
            else {
                counter = 0;
            }
        }
        return false;
    }
};
