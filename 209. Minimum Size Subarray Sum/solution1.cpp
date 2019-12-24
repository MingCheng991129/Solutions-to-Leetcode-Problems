class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
         // solution 1
         // brute force
         // O(n^3)
         // time limit exceeded
         if (nums.empty())
             return 0;
         int len = INT_MAX;
         for (int i = 0; i < nums.size() - 1; i ++) {
             for (int j = i; j < nums.size(); j ++) {
                 int add = 0;
                 for (int temp = i; temp <= j; temp ++) {
                     add += nums[temp];
                 }
                 if (add >= s && len > (j - i + 1))
                     len = (j - i + 1);
             }
         }
         if (len == INT_MAX)
             len = 0;
         return len;
        
        
    }
};
