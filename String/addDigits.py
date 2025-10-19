class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        res = list(str(num))  
        while len(res) != 1:
            tmp_num = sum(int(i) for i in res)
            res = list(str(tmp_num))
        
        return int(res[0])
