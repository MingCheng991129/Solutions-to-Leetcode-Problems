class Solution {
public:
    int countPrimes(int n) {
        int sqrt_res = int(sqrt(float(n)));
        vector <bool> arr(n, false);
        
        for (int i = 2; i <= sqrt_res; i ++) {
            for (int j = 2; i * j < n; j ++) {
                arr[i * j - 1] = true;
            }
                
        }
        int res = 0;
        for (int i = 1; i < n - 1; i ++) {
            if (!arr[i])
                res ++;
            // cout << arr[i];
        }
        return res;
    }
};
