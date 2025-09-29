// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

// Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
// Return k.
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        if (nums.size() == 1) {
            return 1;
        }
        vector<int> tmp;
        for (int i = 0; i < nums.size(); i++) {
            if ((i + 1 < nums.size()) && nums[i + 1] == nums[i]) {
                continue;
            } else {
                tmp.push_back(nums[i]);
            }
        }
        nums = tmp;
        return nums.size();
    }
};