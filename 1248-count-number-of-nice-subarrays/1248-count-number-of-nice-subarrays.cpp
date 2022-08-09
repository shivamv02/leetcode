class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]%2!=0) nums[i]=1;
        else nums[i]=0;
    }
        unordered_map<int,int> mp;
        int sum=0,c=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==k)c++;
            if(mp.find(sum-k)!=mp.end())
                c+=mp[sum-k];
            mp[sum]++;
        }
        return c;     
    }
};