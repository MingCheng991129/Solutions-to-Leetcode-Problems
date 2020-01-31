Solution 1 uses dynamic programming to solve the problem. 
A 2-D array *dp* is built to compute the number of unique paths in any positions:
**dp[i][j] = dp[i - 1][j] + dp[i][j - 1]**

Submission result:
Runtime: 4 ms, faster than 56.77% of C++ online submissions for Unique Paths.
Memory Usage: 8.1 MB, less than 100.00% of C++ online submissions for Unique Paths.
