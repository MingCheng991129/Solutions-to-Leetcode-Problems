class Solution {
public:
    string longestPalindrome(string s) {

        int len = s.size();
        string res;
        if (len == 0) 
            return res;
        
        int left, right;
        bool flag = false;
        int max_length = 0;
        int res_idx1, res_idx2;
        // look for every substring
        for (left = 0; left < len - 1; left ++) {
            for (right = len - 1; right > left; right --) {
                // judge whether each substring is panlindromic or not
                
                int index_1 = left, index_2 = right;
                for (index_1 = left, index_2 = right; index_1 <= index_2; index_1 ++, index_2 --) {
                    if (s[index_1] != s[index_2]) {
                        break;
                    }
                }
                if (index_1 > index_2) {
                    // have found
                    if (max_length < (right - left)) {
                        max_length = right - left;
                        res_idx1 = left;
                        res_idx2 = right;
                    } 
                    flag = true;
                }
                    
            }
         
        }
        
        if (flag) {
            for (int i = res_idx1; i <= res_idx2; i++) {
                res.push_back(s[i]);
            }
        }
        
        
        if (!flag)
            res.push_back(s[0]);
        
        return res;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
            
    }
};