// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = (int)strs.size();
        if (n == 0) {
            return "";
        }
        string longest = strs[0];
        for (int i = 1; i < n; i++) {
            int j = 0;
            while (j < longest.size() && j < strs[i].size()
                && longest[j] == strs[i][j]) {
                    j++;
                }
            if (j == longest.size() || j == strs[i].size()) {
                longest = longest.size() < strs[i].size() ? longest : strs[i];
            } else {
                longest = longest.substr(0, j);
            }
        }
        return longest;
    }
};