class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if (grid.empty())
            return 0;
        if (grid.size() == 1 && grid[0].size() == 1)
            return grid[0][0];
        int row = grid.size();
        int col = grid[0].size();
        int dp[row][col] = {0};
        dp[0][0] = grid[0][0];
        for (int i = 0; i < row; i ++) {
            for (int j = 0; j < col; j ++) {
                if (i == 0 && j == 0)
                    continue;
                else if (i == 0) 
                    dp[0][j] = dp[0][j - 1] + grid[0][j];
                else if (j == 0)
                    dp[i][0] = dp[i - 1][0] + grid[i][0];
                else {
                    dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
                }
            }
        }
        
        return dp[row - 1][col - 1];
    }
};
