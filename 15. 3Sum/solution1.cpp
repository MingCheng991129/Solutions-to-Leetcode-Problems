class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > res;
        if (nums.size() < 3)
            return res;
        int p1, p2, p3;
        vector <int> temp;
        sort(nums.begin(), nums.end());
        for (int p1 = 0; p1 < nums.size() - 2; p1 ++) {
            int temp_p1 = p1;
            p2 = p1 + 1;
            p3 = nums.size() - 1;
            while (p2 < p3) {
                int temp_p2 = p2, temp_p3 = p3;
                if (nums[p1] + nums[p2] + nums[p3] < 0)
                    p2 ++;
                else if (nums[p1] + nums[p2] + nums[p3] > 0)
                    p3 --;
                else {
                    temp.push_back(nums[p1]);
                    temp.push_back(nums[p2]);
                    temp.push_back(nums[p3]);
                    res.push_back(temp);
                    temp.clear();
                    
                    while (p2 < nums.size() - 1 && nums[temp_p2] == nums[p2])
                        p2 ++;
                    while (p3 < nums.size() && nums[temp_p3] == nums[p3])
                        p3 --;
                }
            }
            while (p1 < nums.size() - 2 && nums[p1] == nums[temp_p1])
                p1 ++;
            p1 --;
        }
        return res;
    }
};
