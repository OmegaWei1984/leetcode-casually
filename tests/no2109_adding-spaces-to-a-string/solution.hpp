#include "common.hpp"

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string result;
        int s_size = s.size();
        int sp_size = spaces.size();
        result.reserve(s_size + sp_size);
        int idx_s = 0;
        int idx_sp = 0;
        for (const auto& c : s) {
            if (idx_sp < sp_size && idx_s == spaces[idx_sp]) {
                result.push_back(' ');
                idx_sp++;
            }
            result.push_back(c);
            idx_s++;
        }
        return result;
    }
};

