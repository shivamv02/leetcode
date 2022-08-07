class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int s=1,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
             if(nums[i]==0)
             {
                 s=1;
                 continue;
             }
            s*=nums[i];
            maxi=max(s,maxi);
            
        }
        int maxi2=INT_MIN,f=0;
        s=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
             if(nums[i]==0)
             {
                 f=1;
                 s=1;
                 continue;
             }
            s*=nums[i];
            maxi2=max(s,maxi2);
            
        }
        if(f)
        return max(0,max(maxi,maxi2));
        else
            return max(maxi,maxi2);
    }
};