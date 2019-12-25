class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if (s.size() < 10)
            return vector<string>();
        unordered_map <string, string> hashmap;
        vector <string> result;
        for (int i = 0; i <= s.size() - 10; i ++) {
            string substr = s.substr(i, 10); 
            if (hashmap.count(substr) == 0)
                hashmap.insert(pair<string, string>(substr, substr));
            else {
                if (!(count(result.begin(), result.end(), substr)))
                    result.push_back(substr);
            }
        }
        return result;
    }
};
