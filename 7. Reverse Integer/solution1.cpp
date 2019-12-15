class Solution {
public:
    int reverse(int x) {
        
        if (x > INT_MAX || x <= INT_MIN || x == 0)
            return 0;
        long temp = x;
        temp = abs(x);
        if (temp < 10)
            return x;
        // convert it to positive integer
        int len = 0, temp1 = temp;
        while (temp1 > 0) {
            temp1 /= 10;
            len ++;
        }
            // cout << len;
        int base = 1;
        long base1 = 1;
        for (int i = 1; i < len; i ++) {
            // loop for len-1 times
            base *= 10;
        }
        
        long res = 0;
            
        while (base > 0) {
            int val = temp / base;
            temp -= val * base;
            res += base1 * val;
            if (res > INT_MAX)
                return 0;
            base1 *= 10;
            base /= 10;
            
        }
            
        if (x < 0) 
            return -res;
            
        else 
            return res;
            
            
        
    }
};