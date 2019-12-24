class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        
        // solution 2
        // two pointers
        int sum = 0;
        int left = 0;
        if (nums.empty())
            return 0;
        int len = INT_MAX;
        for (int i = 0; i < nums.size(); i ++) {
            sum += nums[i];
            while (sum >= s) {
                len = min(len, i - left + 1);
                sum -= nums[left];
                left ++;
            }
        }
        if (len == INT_MAX)
            return 0;
        return len;
    }
};
