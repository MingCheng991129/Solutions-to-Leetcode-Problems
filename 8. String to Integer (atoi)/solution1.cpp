class Solution {
public:
    int myAtoi(string str) {
        if (str.empty())
            return 0;
        int n = str.size();
        
        string s;
        for (int i = 0; i < n; i ++) {
            if (str[i] == ' ') {
                if (s.empty())
                    continue;
                else break;
            }
                
            else if (str[i] == '+' || str[i] == '-') {
                if (s.empty())
                    s = s + str[i];
                else break;
            }
     
            else if (str[i] >= '0' && str[i] <= '9') {
                s = s + str[i];
            }
            else break;
        }
        
        for (int i = 0; i < s.size(); i ++)
            cout << s[i];
        if (s.empty())
            return 0;
        double res = 0, base = 1;
        int m = s.size();
        if (s[0] != '-') {
            for (int i = m - 1; i >= 0; i --) {
                if (s[i] == '+')
                    break;
                if (res + (s[i] - '0') * base > INT_MAX)
                    return INT_MAX;
                res += (s[i] - '0') * base;
                base *= 10;
            }
        }
        else {
            for (int i = m - 1; i > 0; i --) {
                if (res - (s[i] - '0')*base < INT_MIN)
                    return INT_MIN;
                res -= (s[i] - '0')*base;
                base *= 10;
            }
        }
        return int(res);
    }
};
