class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0, fast = 0;
        for (int fast = 0; fast < nums.size(); fast ++) {
            if (nums[fast] != 0) {
                nums[slow] = nums[fast];
                slow ++;
            }
        }
        for (int i = slow; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
