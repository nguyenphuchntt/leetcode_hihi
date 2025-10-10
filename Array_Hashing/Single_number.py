class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        set_num = set(nums)
        my_sum = sum(nums)
        double_sum = sum(set_num) * 2
        return (double_sum - my_sum)
