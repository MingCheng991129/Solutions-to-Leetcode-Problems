class Solution {
public:
    bool isValid(string s) {
        // if (s.empty())
        //     return true;
        stack <char> stk;
        bool flag = true;
        for (int i = 0; i < s.size(); i ++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stk.push(s[i]);
            }
            else {
                if (stk.empty()) {
                    flag = false;
                    break;
                }
                if (s[i] == ')') {
                    if (stk.top() == '(') {
                        stk.pop();
                        continue;
                    }
                
                    else {
                        flag = false;
                        break;
                    }
                }
                if (s[i] == '}') {
                    if (stk.top() == '{') {
                        stk.pop();
                        continue;
                    }
                    else {
                        flag = false;
                        break;
                    }
                }
                if (s[i] == ']') {
                    if (stk.top() == '[') {
                        stk.pop();
                        continue;
                    }
                    else {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (!stk.empty())
            flag = false;
        return flag;
    }
};
