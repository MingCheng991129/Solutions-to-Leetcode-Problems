class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if (intervals.empty())
            return {};
        vector<int> start;
        vector<int> end;
        for (int i = 0; i < intervals.size(); i ++) {
            start.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        int idx = 0;
        vector <vector <int> > res;
        for (int i = 0; i < intervals.size(); i ++) {
            if (i == intervals.size() - 1 || start[i + 1] > end[i]) {
                res.push_back({start[idx], end[i]});
                idx = i + 1;
            }
        }
        return res;
    }
};
