class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        # Anagrams must have the same length
        if len(s) != len(t):
            return False

        # Convert strings to lists of characters, sort them, and compare
        return sorted(s) == sorted(t)