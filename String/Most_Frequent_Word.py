from typing import List
import re
class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        word_list = re.findall(r"[a-z]+", paragraph.lower())
        res = dict()
        max_count = 0
        max_word = None
        for word in word_list:
            if word in banned:
                continue
            if word_list.count(word) > max_count:
                max_count = word_list.count(word)
                max_word = word
        return max_word
            
            
## Other solution

# class Solution:
#     def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
#         # manually clean punctuation
#         for ch in "!?',;.":
#             paragraph = paragraph.replace(ch, " ")
        
#         words = paragraph.lower().split()
#         ban = set(banned)
#         freq = {}

#         # count words
#         for w in words:
#             if w not in ban:
#                 freq[w] = freq.get(w, 0) + 1

#         # return word with max frequency
#         return max(freq, key=freq.get)