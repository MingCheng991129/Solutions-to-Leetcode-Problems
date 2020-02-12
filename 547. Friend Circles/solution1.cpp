class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        if (M.empty())
            return 0;
        int n = M.size();
        vector <int> nums(n);
        for (int i = 0; i < n; i ++)
            nums[i] = i;
        
        int circle = n;
        
        for (int i = 0; i < n - 1; i ++) {
            for (int j = i + 1; j < n; j ++) {
                if (M[i][j] == 1) {
                    int root1 = getRoot(nums, i);
                    int root2 = getRoot(nums, j);
                    if (root1 != root2) {
                        nums[root2] = root1;
                        circle --;
                    }
                }
            }
        }
        return circle;
    }
    
    int getRoot(vector<int>& nums, int idx) {
        while (idx != nums[idx]) {
            nums[idx] = nums[nums[idx]];
            idx = nums[idx];
        }
        return idx;
    }
};
