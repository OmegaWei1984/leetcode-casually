#include "common.hpp"

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int result = m * n;
        int min_x = 4 * 10000 + 1;
        int min_y = 4 * 10000 + 1;
        for (int i = 0; i < ops.size(); ++i) {
            if (ops[i].size() == 0) {
                continue;
            }
            if (ops[i][0] < min_x) {
                min_x = ops[i][0];
                result = min_x * min_y;
            }
            if (ops[i][1] < min_y) {
                min_y = ops[i][1];
                result = min_x * min_y;
            }
        }
        return result;
    }
};
