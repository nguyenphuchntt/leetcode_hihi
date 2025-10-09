class Solution(object):
    def majorityElement(self, nums):
        if (len(nums) == 1):
            return nums[0]
        myDict = dict()
        for num in nums:
            if num in myDict:
                myDict[num] += 1
                if myDict[num] >= int(len(nums) / 2):
                    return num
            else:
                myDict[num] = 0