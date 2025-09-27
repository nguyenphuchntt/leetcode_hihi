# Given an array of integers nums, return the length of the longest consecutive sequence of elements that can be formed.

# A consecutive sequence is a sequence of elements in which each element is exactly 1 greater than the previous element. The elements do not have to be consecutive in the original array.

# You must write an algorithm that runs in O(n) time.
from typing import List
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        longest = 0

        nums_set = set(nums)
        for num in nums_set:
            if (num - 1) not in nums_set:
                length = 0
                while (num + length) in nums_set:
                    length += 1
                longest = max(length, longest)
                
        return longest
                    