class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector <string> res;
        if (n == 0)
            return res;
        string out;
        generateParenthesis(n, n, res, out);
        return res;
    }
    
    void generateParenthesis(int left, int right, vector<string> &res, string out) {
        if (left > right) 
            return;
        if (left == 0 && right == 0) {
            res.push_back(out);
            return;
        }
        else {
            if (left > 0)
                generateParenthesis(left - 1, right, res, out + "(");
            if (right > 0)
                generateParenthesis(left, right - 1, res, out + ")");
        }
    }
};
