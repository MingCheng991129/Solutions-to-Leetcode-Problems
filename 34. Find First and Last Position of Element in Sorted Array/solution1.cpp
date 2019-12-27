class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> res (2, -1);
        if (nums.empty())
            return res;
        if (nums.size() == 1) {
            if (nums[0] == target) {
                res[0] = 0;
                res[1] = 0;
                // return res;
            }
        }
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] > target) {
                right = mid - 1;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                // mid = target
                int temp = mid;
                while (temp >= 0 && nums[temp] == target)
                    temp --;
                res[0] = temp + 1;
                while (mid < nums.size() && nums[mid] == target)
                    mid ++;
                res[1] = mid - 1;
                break;
            }
        }
        // if (left == right) {
        //     if (nums[left] == target) {
        //         res[0] = left;
        //         res[1] = left;
        //     }
        // }
        if (res[0] != -1 && res[1] == -1)
            res[1] = res[0];
        return res;
    }
};
