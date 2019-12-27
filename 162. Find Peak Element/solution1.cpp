class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.empty())
            return INT_MIN;
        if (nums.size() == 1)
            return 0;
        if (nums.size() == 2) {
            if (nums[0] > nums[1])
                return 0;
            else return 1;
        }
            
        int peak = INT_MIN;
        for (int i = 1; i < nums.size() - 1; i ++) {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
                peak = i;
                break;
            }
        }
        if (peak == INT_MIN) {
            if (nums[0] > nums[1])
                peak = 0;
            if (nums[nums.size() - 1] > nums[nums.size() - 2])
                peak = nums.size() - 1;
        }
        return peak;
    }
};
