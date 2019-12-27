class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if (nums.empty())
            return false;
        if (nums.size() == 1)
            return (nums[0] == target);
        int p = nums.size() - 1;
        // cout << p;
        // while (p >= 1) {
        //     if (nums[p] >= nums[p - 1])
        //         p --;
        // }
        while (p >= 1 && nums[p] >= nums[p - 1]) {
            p --;
        }
        // cout << p;
        bool flag = false;
        if (p == 0) {
            // not been rotated
            // binary search
            int left = 0, right = nums.size() - 1;
            while (left <= right) {
                int mid = (left + right) / 2;
                if (nums[mid] > target)
                    right = mid - 1;
                else if (nums[mid] < target)
                    left = mid + 1;
                else {
                    flag = true;
                    break;
                }
            }
        }
        
        else {
            // having been rotated
            if (nums[p] <= target && nums[p - 1] >= target) {
                int left = 0, right = nums.size() - 1;

                if (target <= nums[nums.size() - 1]) {
                    // latter part
                    // binary search
                    left = p;
                }
                else if (target >= nums[0]) {
                    // former part
                    right = p - 1;
                    // cout << 'a';
                }
                // binary search
                while (left <= right) {
                    int mid = (left + right) / 2;
                    if (nums[mid] > target)
                        right = mid - 1;
                    else if (nums[mid] < target)
                        left = mid + 1;
                    else {
                        flag = true;
                        break;
                    }
                }
            }
            
        }
        return flag;
    }
};
