class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0];
        int p = nums.size() - 1;
        while (p >= 1) {
            if (nums[p] >= nums[p - 1]) {
                p --;
            }
            else break;
        }
        return nums[p];
        
    }
};
