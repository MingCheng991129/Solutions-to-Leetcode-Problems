class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty())
            return {};
        sort(intervals.begin(), intervals.end());
        // a method to initialize the 2-D array
        vector <vector <int> > res{intervals[0]};
        for (int i = 1; i < intervals.size(); i ++) {
            if (res.back()[1] < intervals[i][0]) {
                res.push_back(intervals[i]);
            }
            else {
                res.back()[1] = max(res.back()[1], intervals[i][1]);
            }
        }
        return res;
    }
};
