#include "common.hpp"
#include <stack>

class Solution {
public:
    string clearStars(string s) {
        vector<stack<int>> counters(26);
        for (size_t i = 0; i < s.size(); ++i)
        {
            if (s[i] == '*')
            {
                for (size_t j = 0; j < 26; ++j)
                {
                    if (counters[j].empty())
                    {
                        continue;
                    }
                    s[counters[j].top()] = '*';
                    counters[j].pop();
                    break;
                }
            }
            else
            {
                size_t idx = s[i] - 'a';
                counters[idx].push(i);
            }
        }
        string result;
        for (size_t i = 0; i < s.size(); i++) {
            if (s[i] != '*') {
                result.push_back(s[i]);
            }
        }
        return result;
    }
};