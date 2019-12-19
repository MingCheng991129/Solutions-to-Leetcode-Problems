class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_0 = 0, count_1 = 0, count_2 = 0;
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            if (nums[i] == 0)
                count_0 ++;
            else if (nums[i] == 1)
                count_1 ++;
            else if (nums[i] == 2)
                count_2 ++;
        }
        int j = 0;
        for (j = 0; j < count_0; j++)
            nums[j] = 0;
        for (int k = 0; k < count_1; k ++) {
            nums[j] = 1;
            j ++;
        }
            
        for (int m = 0; m < count_2; m++) {
            nums[j] = 2;
            j ++;
        }
            
        
    }
};
