class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i-1]>=nums[i])
            {   if(i-1==0)
                reverse(nums.begin(),nums.end());
            }
            else
            {
                reverse(nums.begin()+i,nums.end());
                for(int j=i;j<nums.size();j++)
                {
                    
                  if(nums[j]>nums[i-1])
                  {swap(nums[j],nums[i-1]);
                   break;
                  }
                    
                }
            break;
            }
        }
    }
};