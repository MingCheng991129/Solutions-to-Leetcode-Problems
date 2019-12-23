class Solution {
public:
    void reverseString(vector<char>& s) {
        int p1 = 0, p2 = s.size() - 1;
        if (s.size() == 2) {
            swap(s[0], s[1]);
            
            return;
        }
        while (p1 < p2) {
            swap(s[p1], s[p2]);
            
            p1 ++;
            p2 --;
        }
        return;
    }
};
