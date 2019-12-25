class Solution
{
public:
    bool isValidSudoku(vector<vector<char> > &board)
    {
        int used1[9][9] = {0}, used2[9][9] = {0}, used3[9][9] = {0};
        
        for(int i = 0; i < board.size(); ++ i)
            for(int j = 0; j < board[i].size(); ++ j)
                
                if(board[i][j] != '.') {
                
                    int num = board[i][j] - '0' - 1, k = i / 3 * 3 + j / 3;
                    // the calculation of k is very amazing!
                    /*
                    0 0 0 1 1 1 2 2 2
                    0 0 0 1 1 1 2 2 2
                    0 0 0 1 1 1 2 2 2  
                    3 3 3 4 4 4 5 5 5
                    3 3 3 4 4 4 5 5 5
                    3 3 3 4 4 4 5 5 5
                    6 6 6 7 7 7 8 8 8
                    6 6 6 7 7 7 8 8 8
                    6 6 6 7 7 7 8 8 8
                    */
                    if(used1[i][num] || used2[j][num] || used3[k][num])
                        return false;
                    used1[i][num] = used2[j][num] = used3[k][num] = 1;
                }
        
        return true;
    }
};
