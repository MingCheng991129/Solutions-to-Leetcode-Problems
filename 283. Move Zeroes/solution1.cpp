class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int rear = nums.size() - 1;
        for (int i = 0; i <= rear; i++) {
            if (nums[i] == 0) {
                // int rear = nums.size() - 1;
                for (int j = i + 1; j <= rear; j++) {
                    nums[j - 1] = nums[j];
                }
                nums[rear] = 0;
                rear --;
                i --;
            }
        }
    }
};
