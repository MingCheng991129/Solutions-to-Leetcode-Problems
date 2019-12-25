class Solution {
public:
    bool isHappy(int n) {
        // key point: judge if there has existed a number already
        if (n == 0)
            return false;
        unordered_map <int, int> hashmap;
        int res = 0;
        while (1) {
            res = squareOfDigits(n);
            if (hashmap.count(res) == 0) {
                hashmap.insert(pair<int, int> (res, res % INT_MAX));
            }
            else break;
            n = res;
        }
        if (res == 1)
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
