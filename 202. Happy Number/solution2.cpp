class Solution {
public:
    bool isHappy(int n) {        
        // two pointers
        int slow = n, fast = n;
        if (n == 0)
            return false;
        while (1) {
            slow = squareOfDigits(slow);
            fast = squareOfDigits(fast);
            fast = squareOfDigits(fast);
            if (slow == fast)
                break;
        }
        if (slow == 1)
            return true;
        else return false;
    }
    int squareOfDigits(int n) {
        int res = 0;
        while (n > 0) {
            int num = n % 10;
            // digit.push_back(num);
            res += num * num;
            n -= num;
            n /= 10;
        }
        return res;
    }
};
