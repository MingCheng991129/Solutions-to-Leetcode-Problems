class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
		vector<vector<int>> res;
		vector<int> combination;
		combinationSum(candidates, res, target, combination, 0);
		return res;
    }
    void combinationSum(vector<int>& candidates, vector<vector<int>>& res, int target, vector<int>& combination, int begin) {
		if (!target) {
			res.push_back(combination);
			return;
		}
		for (int i = begin; i < candidates.size() && target >= candidates[i]; ++i) {
			//avoid repeated res
			if (i == begin || (i != begin && candidates[i] != candidates[i - 1])) {
				combination.push_back(candidates[i]);
				// i+1 avoid repeatedly using element in the candidates
				combinationSum(candidates, res, target - candidates[i], combination, i + 1);
				combination.pop_back();
			}
		}
	}

};
