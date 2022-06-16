class Solution {
public:
    int maxProfit(vector<int>& p) {
        int c=0;
        for(int i=0;i<p.size()-1;i++)
         if(p[i]<p[i+1])
         c+=abs(p[i]-p[i+1]);
        return c;
    }
};