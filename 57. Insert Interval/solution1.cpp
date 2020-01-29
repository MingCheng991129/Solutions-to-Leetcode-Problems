class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if (intervals.empty()) {
            if (newInterval.empty())
                return {};
            else return {newInterval};
        }
        if (newInterval.empty())
            return intervals;
        vector <int> starts;
        vector <int> ends;
        for (int i = 0; i < intervals.size(); i ++) {
            starts.push_back(intervals[i][0]);
            ends.push_back(intervals[i][1]);
        }
        starts.push_back(newInterval[0]);
        ends.push_back(newInterval[1]);
        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());
        
        vector <vector<int> > res;
        int idx = 0;
        for (int i = 0; i < starts.size(); i ++) {
            if (i == starts.size() - 1 || starts[i + 1] > ends[i]) {
                res.push_back({starts[idx], ends[i]});
                idx = i + 1;
            }
        }
        return res;
    }
};
