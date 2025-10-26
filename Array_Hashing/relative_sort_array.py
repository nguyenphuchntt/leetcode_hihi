class Solution(object):
    def relativeSortArray(self, arr1, arr2):
        """
        :type arr1: List[int]
        :type arr2: List[int]
        :rtype: List[int]
        """
        order = {num: i for i, num in enumerate(arr2)} 

        arr1.sort(key=lambda x: (order.get(x, len(arr2)), x))
        return arr1
