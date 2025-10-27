class Solution(object):
    def fairCandySwap(self, aliceSizes, bobSizes):
        """
        :type aliceSizes: List[int]
        :type bobSizes: List[int]
        :rtype: List[int]
        """
        a = sum(aliceSizes)
        b = sum(bobSizes)
        gap = abs(a - b) / 2
        
        if b < a:
            gap = - gap
        
        for i in aliceSizes:
            tmp = i + gap
            if tmp in bobSizes:
                return [i, tmp]



        