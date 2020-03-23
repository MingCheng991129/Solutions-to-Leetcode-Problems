class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1)
            return true;
        int last_point = n - 1, i = n - 1;
        while (i >= 0) {
            if (nums[i] + i >= last_point) {
                last_point = i;
                i = last_point - 1;
            }
            else i --;
        }
        return (last_point == 0) ? true: false;
    }
};
