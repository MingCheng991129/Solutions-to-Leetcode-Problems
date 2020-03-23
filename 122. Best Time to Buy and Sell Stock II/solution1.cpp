class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n <= 1)
            return 0;
      
        int price = 0;
        for (int i = 1; i < n; i ++) {
            if (prices[i] > prices[i - 1]) {
                price += (prices[i] - prices[i - 1]);
            }
        }
        return price;
    }
};
