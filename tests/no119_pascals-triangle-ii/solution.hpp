#include "common.hpp"

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pre, curr;
        for (int i = 0; i <= rowIndex; ++i) {
            curr.resize(rowIndex + 1);
            curr[0] = 1;
            curr[i] = 1;
            for (int j = 1; j < i; ++j) {
                curr[j] = pre[j - 1] + pre[j];
            }
            pre = curr;
        }
        return curr;
    }

    vector<int> getRow2(int rowIndex) {
        vector<int> result(rowIndex + 1);
        result[0] = 1;
        for (int i = 1; i <= rowIndex; ++i) {
            result[i] = result[i - 1] * (rowIndex - i + 1) / i;
        }
        return result;
    }
};