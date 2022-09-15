class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0,curr=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            curr=min(curr,prices[i]);
            maxi=max((prices[i]-curr),maxi);
        }
        return maxi;
    }
};