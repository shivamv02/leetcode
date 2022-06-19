class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // Moore's Voting Algorithm
        
        int el=nums[0],cnt=1;
        for(int i=1;i<nums.size();i++)
        {
            if(el==nums[i])
                cnt++;
            else
                cnt--;
            if(cnt==0)
            {
                el=nums[i];
                cnt=1;
            }
        }
        return el;
    }
};