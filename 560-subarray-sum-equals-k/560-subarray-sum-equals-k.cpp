class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp;
      int c=0,sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==k)
                c++;
            if(mp.find(sum-k)!=mp.end())
                c+=mp[sum-k];
            
            mp[sum]++;
          
            
        }
        return c;
    }
};