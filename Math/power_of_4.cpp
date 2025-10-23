class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n < 0) {
            return false;
        }
        if (n == 1) {
            return true;
        }
        int i = 1;
        while (i < n) {
            if (INT_MAX / 4 <= i) {
                return false;
            }
            i = i * 4;
        }
        if (i == n) {
            return true;
        } else {
            return false;
        }
    }
};