class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()<3)
            return nums[0];
        sort(nums.begin(),nums.end());
        int maxi=INT_MIN,c=0,num;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                c++;
            else
                c=0;
           if(c>maxi)
               num=nums[i];
            maxi=max(c,maxi);
        }
        return num;
    }
};