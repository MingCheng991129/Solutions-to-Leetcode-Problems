class Solution {
public:
    string intToRoman(int num) {
        string s;
        vector<int> val{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> str{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for (int i = 0; i < val.size(); i ++) {
            while (num >= val[i]) {
                num -= val[i];
                s += str[i];
            }
        }
        return s;
    }
};
