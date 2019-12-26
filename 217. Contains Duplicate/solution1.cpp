class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.empty())
            return false;
        unordered_map <int, int> hashmap;
        int i = 0;
        for (i = 0; i < nums.size(); i ++) {
            if (hashmap.count(nums[i]) == 0)
                hashmap.insert(pair<int, int> (nums[i], nums[i]));
            else break;
        }
        if (i < nums.size())
            return true;
        else return false;
    }
};
