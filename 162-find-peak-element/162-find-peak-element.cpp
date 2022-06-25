class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        int k=0;
        for(int i=1;i<nums.size();i++)
            if(nums[i-1]<nums[i])
                k++;
        if(k==nums.size()-1) return k;
        int c=0;
        for(int i=1;i<nums.size()-1;i++)
            if(nums[i]>nums[i-1] and nums[i]>nums[i+1])
              return i;
        return 0;
    }
};