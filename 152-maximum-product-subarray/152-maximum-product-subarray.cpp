class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int s=1,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
              s*=nums[i];
            maxi=max(s,maxi);
             if(nums[i]==0)
                 s=1;
             
        }
     
        s=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
                s*=nums[i];
            maxi=max(s,maxi);
             if(nums[i]==0)
                 s=1;
           
        }
    return maxi ;
    }
};