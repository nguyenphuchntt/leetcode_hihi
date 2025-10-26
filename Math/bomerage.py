class Solution(object):
    def isBoomerang(self, points):
        """
        :type points: List[List[int]]
        :rtype: bool
        """
        (x1, y1), (x2, y2), (x3, y3) = points

        if (x1 == x2 and y1 == y2) or (x1 == x3 and y1 == y3) or (x2 == x3 and y2 == y3):
            return False

        return (x2 - x1) * (y3 - y1) != (y2 - y1) * (x3 - x1)
