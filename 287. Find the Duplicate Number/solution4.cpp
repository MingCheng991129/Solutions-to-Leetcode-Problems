class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         set <int> myset;
         int i = 0;
         for (i = 0; i < nums.size(); i ++) {
             if (myset.count(nums[i]) == 0) 
                 myset.insert(nums[i]);
             else break;
         }
         return nums[i]; 
    }
};
