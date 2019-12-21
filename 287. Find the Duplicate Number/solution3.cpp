class Solution {
public:
    int findDuplicate(vector<int>& nums) {
 
         unordered_map <int, int> hashmap;
         int i = 0;
         for (i = 0; i < nums.size(); i ++) {
             if (!hashmap.count(nums[i])) {
                 hashmap.insert(pair<int, int>(nums[i], nums[i] % INT_MAX));
             }
             else break;
         }
         return nums[i];
        
        
    }
};
