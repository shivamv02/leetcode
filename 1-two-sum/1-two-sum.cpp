class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      //  unordered_set<int> u;
        map<int,int> u;
        vector<int> v;
        
        for(int i=0;i<nums.size();i++)
        {
            int x=target-nums[i];
            if(u.find(x)!=u.end())
            {
               
               v.push_back(u[x]);
               v.push_back(i);
                break;
            }
            else
                u[nums[i]]=i;
        }
   
        return v;
        
    }
    
};