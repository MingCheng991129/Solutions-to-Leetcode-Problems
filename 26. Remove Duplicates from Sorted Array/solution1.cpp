class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() < 2)
            return nums.size();
        
        int current = nums[0];
        int size = nums.size();
        for (int i = 1; i < size; i ++) {
            if (current == nums[i]) {
                nums.erase(nums.begin() + i);
                size --;
                i --;
            }
            else
                current = nums[i];
        }
        return nums.size();
    }
};
