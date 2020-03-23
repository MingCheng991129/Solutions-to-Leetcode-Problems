class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        // vector<int> arr;
        for (int i = 0; i < n; i ++) {
            if (gas[i] < cost[i])
                continue;
            int j = i, curr = gas[i], new_j = (j + 1) % n;
            bool flag = false;
            while (1) {
                new_j = (j + 1) % n;
                curr = curr - cost[j] + gas[new_j];
                if (curr < cost[new_j]) {
                    flag = true;
                    break;
                }
                if (curr >= cost[new_j] && new_j == i) {
                    flag = false;
                    break;
                }
                j = new_j;
                
            }
            if (!flag)
                return i;
        }
        
        return -1;
    }
};
