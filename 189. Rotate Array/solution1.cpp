class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while (k > nums.size())
            k -= nums.size();
        
        if (k > 0) {
            vector<int>arr;
            int idx = nums.size() - 1;

            for (int i = 0; i < k; i ++) {
                // loop for k times
                int val = nums.back();
                nums.pop_back();
                // arr.push_back(val);
                arr.insert(arr.begin(), val);
            }
            nums.insert(nums.begin(), arr.begin(), arr.end());
        }
    }
};
