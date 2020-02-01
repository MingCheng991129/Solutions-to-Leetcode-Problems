class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if (obstacleGrid.empty())
            return 0;
        
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if (obstacleGrid[0][0] == 1 || obstacleGrid[m - 1][n - 1] == 1)
            return 0;
        
        // double dp[m][n] = {0};
        vector <vector <double> > dp(m, vector <double> (n));

        for (int i = 0; i < m; i ++) {
            for (int j = 0; j < n; j ++)
                dp[i][j] = 0;
        }
       
        
        for (int idx = 0; idx < m; idx ++) {
            if (obstacleGrid[idx][0] == 0)
                dp[idx][0] = 1;
            else 
                break;
        }
        for (int idx = 0; idx < n; idx ++) {
            if (obstacleGrid[0][idx] == 0)
                dp[0][idx] = 1;
            else 
                break;
        }
        
        for (int i = 0; i < m; i ++) {
            for (int j = 0; j < n; j ++) {
                
                if (i == 0 || j == 0)
                    continue;
                
                if (obstacleGrid[i][j] == 0) {
                    if (obstacleGrid[i - 1][j] == 0 && obstacleGrid[i][j - 1] == 0) 
                        dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                    else if (obstacleGrid[i][j - 1] == 0) 
                        dp[i][j] = dp[i][j - 1];
                    else if (obstacleGrid[i - 1][j] == 0)
                        dp[i][j] = dp[i - 1][j];
                    else dp[i][j] = 0;
                }
                else dp[i][j] = 0;
            } 
        }
        return dp[m - 1][n - 1];
    }
};
