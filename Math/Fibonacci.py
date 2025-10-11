class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 0:
            return 0
        if n == 1:
            return 1
        if n == 2:
            return 1
        a = 0
        b = 1
        for i in range(2, n + 1):
            tmp = a + b
            a = b
            b = tmp
        return b