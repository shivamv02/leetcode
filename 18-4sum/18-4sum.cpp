class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> vv;
        set<vector<int>> s;
      if(nums.size()<4)
          return vv;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++)
        {
            if((i>0 and nums[i-1]==nums[i])) continue;
            for(int j=i+1;j<nums.size()-2;j++)
            {
                 if((j>i+1 and nums[j-1]==nums[j])) continue;
              int l=j+1,h=nums.size()-1;
                 long long int f=target*1LL-nums[j]-nums[i];
               
                while(l<h)
                {
                   if(nums[l]+nums[h]==f)
                   {
                      s.insert({nums[i],nums[j],nums[l],nums[h]}); 
                       l++;
                       h--;
                   }
                    else if(nums[l]+nums[h]>f)
                        h--;
                    else
                        l++;
                }
            }
        }
        for(auto x:s )
            vv.push_back(x);
        return vv;
    }
};