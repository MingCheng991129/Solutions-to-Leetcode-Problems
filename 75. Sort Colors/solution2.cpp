class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int len = nums.size();
        int red = 0, blue = len - 1;
        
        for (int i = 0; i <= blue; i ++) { // notice the upper boundary of i !!!
            if (nums[i] == 0) {
                // swap i with red
                // int temp = nums[red];
                // nums[red] = 0;
                // nums[i] = temp;
                // red ++;
                swap(nums[i], nums[red]);
                red ++;
            }
            else if (nums[i] == 2) {
                // swap i with blue
                // int temp = nums[blue];
                // nums[blue] = 2;
                // nums[i] = temp;
                // i --;
                // blue --;
                swap(nums[i], nums[blue]);
                i --;
                blue --;
            }
        }
            
        
    }
};
