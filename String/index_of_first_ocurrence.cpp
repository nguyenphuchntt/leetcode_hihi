class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.length();
        int n = haystack.length();
        if (m > n) {
            return -1;
        }
        if (m == n) {
            if (haystack == needle) {
                return 0;
            } else {
                return -1;
            }
        }
        for (int i = 0; i < n - m + 1; i++) {
            bool isMatch = true;
            for (int j = 0; j < m; j++) {
                if (needle[j] != haystack[i + j]) {
                    isMatch = false;
                    break;
                }
            }
            if (isMatch) {
                return i;
            }
        }
        return -1;
    }
};