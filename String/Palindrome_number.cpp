// Given an integer x, return true if x is a palindrome, and false otherwise.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        for (int i = 0; i <= num.size() / 2; i++) {
            if (num[i] != num[num.size()- 1 - i]) {
                return false;
            }
        }
        return true;
    }
};