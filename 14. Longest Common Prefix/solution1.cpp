class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";
        string res = "";
        for (int i = 0; i < strs[0].size(); i ++) {
            char ch = strs[0][i];
            for (int j = 1; j < strs.size(); j ++) {
                if (strs[j].size() <= i || strs[j][i] != ch)
                    return res;
            }
            res.push_back(ch);
        }
        return res;
    }
};
