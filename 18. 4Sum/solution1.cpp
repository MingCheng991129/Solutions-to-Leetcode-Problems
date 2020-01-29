class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector <vector<int> > res;
        vector<int> temp;
        if (nums.size() < 4)
            return res;
        
        sort(nums.begin(), nums.end());
        
        int p1, p2, p3, p4;
        
        for (p1 = 0; p1 < nums.size() - 3; p1 ++) {
            for (p2 = p1 + 1; p2 < nums.size() - 2; p2 ++) {
                p3 = p2 + 1;
                p4 = nums.size() - 1;
                
                while (p3 < p4) {
                    
                    int temp_p3 = p3, temp_p4 = p4;
                    if (nums[p3] + nums[p4] > target - nums[p1] - nums[p2]) 
                        p4 --;
                    else if (nums[p3] + nums[p4] < target - nums[p1] - nums[p2])
                        p3 ++;
                    else {
                        temp.push_back(nums[p1]);
                        temp.push_back(nums[p2]);
                        temp.push_back(nums[p3]);
                        temp.push_back(nums[p4]);
                        res.push_back(temp);
                        temp.clear();
                        p3 ++;
                        p4 --;
                        // break;
                        while (p3 < nums.size() - 1 && nums[temp_p3] == nums[p3])
                            p3 ++;
                        while (p4 < nums.size() && nums[temp_p4] == nums[p4])
                            p4 --;
                    }
                }
                int temp_p2 = p2;
                while (p2 < nums.size() - 2 && nums[temp_p2] == nums[p2])
                    p2 ++;
                p2 --;
            }
            int temp_p1 = p1;
            while (p1 < nums.size() - 1 && nums[temp_p1] == nums[p1])
                p1 ++;
            p1 --;
        }
        return res;
    }
};
