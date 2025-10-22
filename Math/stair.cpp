class Solution {
public:
    int arrangeCoins(int n) {
        if (n == 0) {
            return 0;
        }
        double k = 0;
        while (k / 2 * (k + 1) < n) {
            k++;
        }
        if (k / 2 * (k + 1) == n) {
            return k;
        }
        else {
            return --k;
        }
    }
};