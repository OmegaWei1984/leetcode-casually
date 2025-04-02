#include "common.hpp"

class Solution {
public:
    int percentageLetter(string s, char letter) {
        int total = s.size();
        if (total <= 0) return -1;
        int counter = 0;
        for (const auto &c : s) {
            if (c == letter) {
                counter++;
            }
        }
        return counter * 100 / total;
    }
};

