class Solution {
public:
    bool isPowerOfThree(int n) {
        int tmp = 1;
        while (tmp < n) {
            if (INT_MAX / 3 <= tmp) {
                return false;
            }
            tmp *= 3;
        }
        if (tmp == n) {
            return true;
        }
        return false;
    }
};