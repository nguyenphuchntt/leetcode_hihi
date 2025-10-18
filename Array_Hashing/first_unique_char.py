class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        mydict = dict()
        arr = []
        for ch in s:
            if ch not in mydict:
                mydict[ch] = 0
                arr.append([ch, s.index(ch)])
            else:
                mydict[ch] = 1
        for i in range(len(arr)):
            if mydict[arr[i][0]] == 0:
                return arr[i][1]
        return -1