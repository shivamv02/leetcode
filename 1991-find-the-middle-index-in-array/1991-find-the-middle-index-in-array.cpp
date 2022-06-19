class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum,current_sum=0;
        for(auto x:nums)
            sum+=x;
        for(int i=0;i<nums.size();i++)
        {
            if(2*current_sum==sum-nums[i])
                return i;
            current_sum+=nums[i];
        }
        return -1;
    
        
    }
};