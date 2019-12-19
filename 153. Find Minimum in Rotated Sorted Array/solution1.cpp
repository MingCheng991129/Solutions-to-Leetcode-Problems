class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0];
        int idx = nums.size() - 1;
        while (1) {
            if (nums[0] > nums[idx]) {
                idx --;
            }
            else break;
        }
        if (idx == nums.size() - 1)
            return nums[0];
        else return nums[idx + 1];
    }
};
