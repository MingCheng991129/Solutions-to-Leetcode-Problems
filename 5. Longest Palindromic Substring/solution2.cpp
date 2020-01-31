class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty())
            return "";
        int n = s.size();
        int dp[n][n] = {0};
        /*
        As for array dp, 1 means the string in the region[i, j] is palindromic while 0 means the opposite.
        */
        int left = 0, len = 1;
        
        for (int col = 0; col < n; col ++) {
            dp[col][col] = 1;
            for (int row = 0; row < col; row ++) {
                dp[row][col] = (s[row] == s[col] && (col - row < 2 || dp[row + 1][col - 1]));
                
                if (len < col - row + 1 && dp[row][col] == 1) {
                    left = row;
                    len = col - row + 1;
                }
            }
        }
        
        return s.substr(left, len);
    }
};
