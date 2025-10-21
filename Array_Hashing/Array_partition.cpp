class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int res = 0;
        sort(nums.begin(), nums.end());
        int i = 0;
        int n = nums.size();
        while (i < n) {
            res += nums[i];
            i = i + 2;
        }
        return res;
    }
};