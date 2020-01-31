Solution 1 uses dynamic programming to solve the problem. 
The 2-D array *dp[i, j]* computes current cost from start to each position[i, j]:
**dp[i, j] = min(dp[i-1, j], dp[i, j-1]) + grid[i, j]**

Submission result:
Runtime: 12 ms, faster than 49.11% of C++ online submissions for Minimum Path Sum.
Memory Usage: 10.8 MB, less than 55.26% of C++ online submissions for Minimum Path Sum.
