class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty())
            return 0;
        vector <int> nums;
        int m = grid.size(), n = grid[0].size();
        int islands = 0;
        for (int i = 0; i < m; i ++) {
            for (int j = 0; j < n; j ++) {
                if (grid[i][j] == '1') {
                    islands ++;
                    nums.push_back(i * n + j);
                }
                else nums.push_back(-1);
            }
        }
        // four directions
        int dir[5] = {0, 1, 0, -1, 0};
        
        for (int i = 0; i < m; i ++) {
            for (int j = 0; j < n; j ++) {
                if (grid[i][j] == '1') {
                    for (int k = 0; k < 4; k ++) {
                        // four directions
                        int x = dir[k] + i;
                        int y = dir[k + 1] + j;
                        if (x >= 0 && x < m && y >= 0 && y < n && grid[x][y] == '1') {
                            int root1 = root(nums, i *n + j);
                            int root2 = root(nums, x *n + y);
                            bool flag = union_(nums, root1, root2);
                            if (flag)
                                islands --;
                        }
                    }
                }
            }
        }
        return islands;
    }
    
    int root(vector <int>& nums, int i) {
        while (i != nums[i]) {
            nums[i] = nums[nums[i]];
            i = nums[i];
        }
        return i;
    }
    bool union_(vector<int> & nums, int root1, int root2) {
        if (root1 != root2) {
            nums[root2] = root1;
            return true;
        }
        return false;
    }
};
