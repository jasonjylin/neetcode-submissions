class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;

        int minPrice = prices[0];

        for (auto p : prices) {
            minPrice = min(p, minPrice);

            res = max(res, p - minPrice);
        }

        return res;
    }
};
