class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> v;
        if(nums.size()<3) return v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            int l=i+1,h=nums.size()-1;
            if(i==0 or (i>0 and nums[i-1]!=nums[i]))
            while(l<h)
            {
                if(nums[l]+nums[h] == -nums[i])
                {
                    v.push_back({nums[i],nums[l],nums[h]});
                    
                    while(l<h and (nums[l] == nums[l+1])) l++;
                    while(l<h and (nums[h] == nums[h-1])) h--;
                    l++;
                    h--;
                }
                else if(nums[l]+nums[h]>-nums[i])
                    h--;
                else
                    l++;
            }
           
        }
        return v;
        
    }
};