class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) {
            return 0;
        }

        int res = 0;
        
        int curMin = prices[0];

        for (int p : prices) {
            if (curMin > p) {
                curMin = p;
            }

            res = max(p - curMin, res);
        } 

        return res;
    }
};
