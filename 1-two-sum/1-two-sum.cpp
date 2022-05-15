class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int> u;
        vector<int> v;
        
        for(int i=0;i<nums.size();i++)
        {
            int x=target-nums[i];
            if(u.find(x)!=u.end())
            {
                for(int j=0;j<nums.size();j++)
                    if(nums[j]==x and i!=j)
                         v.push_back(j);
                
                v.push_back(i);
                break;
            }
            else
                u.insert(nums[i]);
        }
   
        return v;
        
    }
    
};