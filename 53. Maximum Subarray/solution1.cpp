class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if (nums.empty())
            return 0;
        if (nums.size() == 1)
            return nums[0];
        
        int local = nums[0], global = nums[0];
        for (int i = 1; i < nums.size(); i ++) {
            local = max(nums[i], local + nums[i]);
            global = max(local, global);
        }
        return global;
        
    }
};
