class Solution(object):
    def findMissingAndRepeatedValues(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: List[int]
        """
        ans = [0] * (len(grid) * len(grid[0]) + 1)
        x = []

        for i in range(len(grid)):
            for j in range(len(grid[0])):
                ans[grid[i][j]] = ans[grid[i][j]] + 1

        for i in range(1,len(ans)):
            if ans[i] == 2:
                x.append(i)

        for i in range(1,len(ans)):
            if ans[i] == 0:
                x.append(i)

        return x

        
        