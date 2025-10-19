class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        myDict = dict()
        for ch in ransomNote:
            if ch not in myDict:
                myDict[ch] = 1
            else:
                myDict[ch] += 1
        
        for ch in magazine:
            if ch in myDict:
                myDict[ch] -= 1
        
        for keys, values in myDict.items():
            if values > 0:
                return False
        return True
        