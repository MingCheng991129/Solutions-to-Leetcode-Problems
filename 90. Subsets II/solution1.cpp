class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int> > res(1, vector<int>());
        if (nums.empty())
            return res;
        
        int size = 1, last = nums[0];
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i ++) {
            if (last != nums[i]) {
                last = nums[i];
                size = res.size();
            }
            int new_size = res.size();
            for (int j = new_size - size; j < new_size; j ++) {
                res.push_back(res[j]);
                res.back().push_back(nums[i]);
            }
        }
        return res;
    }
};
