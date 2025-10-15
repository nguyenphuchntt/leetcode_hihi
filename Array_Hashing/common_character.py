class Solution(object):
    def commonChars(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        n = len(words)
        mydict = {chr(ord('a') + i): [0] * n for i in range(26)}

        for idx, word in enumerate(words):
            for ch in word:
                if ch in mydict:
                    mydict[ch][idx] += 1

        res = []
        for ch in mydict:
            min_freq = min(mydict[ch])
            if min_freq > 0:
                res.extend([ch] * min_freq)

        return res
