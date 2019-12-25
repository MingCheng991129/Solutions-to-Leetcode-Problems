class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.empty())
            return vector < vector <string> > ();
        
        vector< vector <string> > res;
        unordered_map <string, vector<string> > hashmap;
        for (int i = 0; i < strs.size(); i ++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            hashmap[s].push_back(strs[i]);
        }
        for (unordered_map <string, vector<string>>::iterator it = hashmap.begin(); it != hashmap.end(); it ++) {
            res.push_back(it -> second);
        }
        return res;
    }
};
