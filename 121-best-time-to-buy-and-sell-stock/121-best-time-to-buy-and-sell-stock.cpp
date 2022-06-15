class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int minn = INT_MAX, maxx = 0;
        for (int i = 0; i < prices.size(); ++i) {
            minn = min(minn, prices[i]);
            maxx = max(maxx, prices[i] - minn);
        }
        return maxx;
    }
};