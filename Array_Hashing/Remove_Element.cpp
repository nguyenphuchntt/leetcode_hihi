class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count[101] = {0};
        int n = nums.size();
        for (int& x : nums) {
            count[x]++;
            if (x == val) {
                x = -1;
            }
        }
        std::sort(nums.begin(), nums.end(), std::greater<int>());
        return n - count[val];
    }
};