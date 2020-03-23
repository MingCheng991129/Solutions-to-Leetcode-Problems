class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty())
            return res;
        vector<string> dict{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        backtracking(digits, "", 0, res, dict);
        return res;
    }
    void backtracking(string & digits, string curr, int level, vector<string>& res, vector<string> & dict) {
      // end backtracking
        if (level == digits.size()) {
            res.push_back(curr);
            return;
        }
        // choices
        string s = dict[digits[level] - '0'];
        for (int i = 0; i < s.size(); i ++) {
            backtracking(digits, curr + s[i], level + 1, res, dict);
        }
    }
};
