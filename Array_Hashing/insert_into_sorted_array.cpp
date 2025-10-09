class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums.size() == 0) {
            return 0;
        }
        if (target <= nums[0]) {
            return 0;
        }
        int i = 0;
        while (i + 1 < nums.size()) {
            if (nums[i + 1] >= target) {
                return i + 1;;
            }
            i++;
        }
        if (nums[i] >= target) {
            return i;
        } else {
            return i + 1;
        }
    }
};