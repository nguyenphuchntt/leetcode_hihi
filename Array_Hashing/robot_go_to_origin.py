class Solution(object):
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        arr = [0, 0]
        for move in moves:
            if move == 'L':
                arr[0] += 1
            elif move == 'R':
                arr[0] -= 1
            elif move == 'U':
                arr[1] += 1
            else:
                arr[1] -= 1
        return arr[0] == 0 and arr[1] == 0
        