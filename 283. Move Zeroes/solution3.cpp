class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // solution 3
        // swap when not 0
        int slow = 0, fast = 0;
        for (int fast = 0; fast < nums.size(); fast ++) {
            if (nums[fast] != 0) {
                swap(nums[slow], nums[fast]);
                slow ++;
            }
        }
        
        
        
    }
};
