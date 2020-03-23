class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort the array using quick sort
        quick_sort(nums, 0, nums.size() - 1);
        // for(int i = 0; i < nums.size(); i ++) {
        //     cout << nums[i] << ' ';
        // }
        int i = nums.size() - 1;
        for (int j = 0; j < k - 1; j ++) {
            i --;
        }
        return nums[i];
    }
    void quick_sort(vector<int>& nums, int low, int high) {
        if (low < high) {
            int idx;
            idx = get_index(nums, low, high);
            quick_sort(nums, low, idx - 1);
            quick_sort(nums, idx + 1, high);
        }
    }
    int get_index(vector<int> & nums, int low, int high) {
        int pivot = nums[low];
        while (low < high) {
            
            while (low < high && pivot <= nums[high]) {
                high --;
            }
            nums[low] = nums[high];
            while (low < high && pivot >= nums[low]) {
                low ++;
            }
            nums[high] = nums[low];
        }
        
        nums[low] = pivot;
        return low;
    }
    
};
