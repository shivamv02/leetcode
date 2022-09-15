class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN,sum=0;
            for(int i=0;i<nums.size();i++)
            {
                sum+=nums[i];
                if(sum<0)sum=0;
                maxi=max(sum,maxi);
            }
        int m=INT_MIN;
        for(auto x:nums)
        {
            m=max(x,m);
        }
        if(m<=0) return m;
        
        return maxi;
    }
};