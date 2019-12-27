class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector <int> arr;
        if (nums.empty())
            return arr;
        if (nums.size() == 1) {
            arr.push_back(0);
            return arr;
        }
        for (int i = 0; i < nums.size() - 1; i ++) {
            int num = 0;
            for (int j = i + 1; j < nums.size(); j ++) {
                if (nums[i] > nums[j])
                    num ++;
            }
            arr.push_back(num);
        }
        arr.push_back(0);
        return arr;
    }
};
