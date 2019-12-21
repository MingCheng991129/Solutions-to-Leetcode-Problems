class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> arr;
        if (numbers.empty())
            return arr;
        int idx_1 = 0, idx_2 = numbers.size() - 1;
        while (idx_1 < idx_2) {
            if (numbers[idx_1] + numbers[idx_2] < target) {
                idx_1 ++;
            }
            else if (numbers[idx_1] + numbers[idx_2] > target) {
                idx_2 --;
            }
            else {
                arr.push_back(idx_1 + 1);
                arr.push_back(idx_2 + 1);
                break;
            }
        }
        return arr;
    }
};
