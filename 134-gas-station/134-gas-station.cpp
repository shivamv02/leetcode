class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gs=0,cs=0;
        for(int i=0;i<gas.size();i++)
        {
            gs+=gas[i];
            cs+=cost[i];
        }
        if(gs<cs)
            return -1;
        int ans=0;
        gs=0,cs=0;
        for(int i=0;i<gas.size();i++)
        {
            if(cs<0)
            {
                cs=0;
               ans=i; 
            }
            cs+=(gas[i]-cost[i]);
        }
        return ans;
    }
};