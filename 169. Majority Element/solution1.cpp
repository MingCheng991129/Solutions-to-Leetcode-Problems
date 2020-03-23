class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if (n % 2 == 0)
            n /= 2;
        else 
            n = n / 2 + 1;
        unordered_map <int, int> hashmap;
        for (int i = 0; i < nums.size(); i ++) {
            if (hashmap.count(nums[i]) == 0)
                hashmap.insert(pair<int, int> (nums[i], 1));
            else {
                hashmap[nums[i]] ++;
            }
        }
        unordered_map<int, int>::iterator it = hashmap.begin();
        for (; it != hashmap.end(); it ++) {
            if (it -> second >= n)
                break;
        }
        return it -> first;
    }
};
