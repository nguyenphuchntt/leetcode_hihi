class Solution(object):
    def smallestRangeI(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        max_val = max(nums)
        min_val = min(nums)
        diff = max_val - min_val

        return max(0, diff - 2 * k)
