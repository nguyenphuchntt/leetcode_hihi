class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        s = list(s)  # chuyển string sang list để có thể gán
        vowels = []
        is_vowels = []
        for ch in s:
            if ch.lower() in ['a', 'e', 'i', 'o', 'u']:  # xử lý cả chữ hoa
                is_vowels.append(True)
                vowels.append(ch)
            else:
                is_vowels.append(False)
        
        vowels.reverse()
        j = 0
        for i in range(len(s)):
            if is_vowels[i]:
                s[i] = vowels[j]
                j += 1
        
        return ''.join(s)  # ghép list thành string
