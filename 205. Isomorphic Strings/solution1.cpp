class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;
        else if (s.size() == 1 && t.size() == 1)
            return true;
        
        unordered_map <char, int> hashmap1;
        unordered_map <char, int> hashmap2;
        int i = 0;
        for (i = 0; i < s.size(); i ++) {
            
            if (hashmap1[s[i]] != hashmap2[t[i]])
                break;
            
            if (hashmap1.count(s[i]) == 0) {
                hashmap1.insert(pair<char, int> (s[i], 1));
            }
            else if (hashmap1.count(s[i]) != 0) {
                hashmap1[s[i]] += (i + 1);
            }
            
            if (hashmap2.count(t[i]) == 0) {
                hashmap2.insert(pair<char, int> (t[i], 1));
            }
            else {
                hashmap2[t[i]] += (i + 1);
            }
            
        }
        if (i < s.size())
            return false;
        else return true;
    }
};
