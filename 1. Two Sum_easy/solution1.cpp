class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        
        vector<int> arr;
        
        
        if (len == 0)
            return arr;
        
        else {
            int i = 0;
            
            for (i = 0; i < len - 1; i ++){
                for (int j = i + 1; j < len; j++) {
                    
                    if (nums[i] + nums[j] == target) {
                        arr.push_back(i);
                        arr.push_back(j);
                        
                        break;
                    }
                        
                }
                if (arr.empty() == false)
                    break;
             }
            
            return arr;
        }
    }
        
};