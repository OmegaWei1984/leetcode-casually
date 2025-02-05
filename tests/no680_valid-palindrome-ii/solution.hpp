#include "common.hpp"

class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        bool has_del = false;
        while (left < right) {
            if (s[left] != s[right]) {
                return validPalindrome(s, left+1, right) 
                    || validPalindrome(s, left, right-1);
            }
            left++;
            right--;
        }
        return true;
    }
private:
    bool validPalindrome(const string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
