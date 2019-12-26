class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.empty() || t.empty())
            return true;
        if (s.size() != t.size())
            return false;
        unordered_map <char, int> hashmap1;
        unordered_map <char, int> hashmap2;
        for (int i = 0; i < s.size(); i ++) {
            if (hashmap1.count(s[i]) == 0) {
                hashmap1.insert(pair<char, int> (s[i], 1));
            }
            else 
                hashmap1[s[i]] ++;
            if (hashmap2.count(t[i]) == 0) {
                hashmap2.insert(pair<char, int> (t[i], 1));
            }
            else 
                hashmap2[t[i]] ++;
        }
        int i = 0;
        for (i = 0; i < s.size(); i ++) {
            if (hashmap2.count(s[i]) == 0 || hashmap1[s[i]] != hashmap2[s[i]])
                break;
        }
        if (i < s.size())
            return false;
        else return true;
    }
};
