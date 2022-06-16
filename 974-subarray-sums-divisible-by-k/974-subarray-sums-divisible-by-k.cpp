class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int> mp;
        mp[0]=1;
        int s=0,c=0;
        for(auto x:nums)
        {
            s+=x;
            int t=s%k;
            if(t<0)
                t=t+k;
            if(mp.find(t)!=mp.end())
            {
                c+=mp[t];
                mp[t]++;
            }
            else
                ++mp[t];
        }
        return c;
        
        
    }
};