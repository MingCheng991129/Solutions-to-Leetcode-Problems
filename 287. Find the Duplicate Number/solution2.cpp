class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int i = 0, j = 0;
         bool flag = false;
         for (i = 0; i < nums.size() - 1; i ++) {
             for (int j = i + 1; j < nums.size(); j ++) {
                 if (nums[i] == nums[j]) {
                     flag = true;
                     break;
                 }
                    
             }
             if (flag)
                 break;
         }
         return nums[i]; 
    }
};
