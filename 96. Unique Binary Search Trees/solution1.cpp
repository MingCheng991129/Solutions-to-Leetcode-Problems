class Solution {
public:
    int numTrees(int n) {
        vector <int> arr;
        arr.push_back(1);
        arr.push_back(1);
        for (int i = 2; i <= n; i ++) {
            int temp = 0;
            for (int j = 0; j < i; j ++) {
                temp += arr[j] * arr[i - 1 - j];
            }
            // cout << temp << ' ';
            arr.push_back(temp);
        }
        
        return arr[n];
    }
};
