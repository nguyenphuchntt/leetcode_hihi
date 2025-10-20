class Solution(object):
    def isPerfectSquare(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num < 1:
            return False
        i = 1
        while i * i < num:
            i += 1
        if i * i == num:
            return True
        else:
            return False
        