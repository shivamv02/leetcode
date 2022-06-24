class Solution {
public:
    int minMoves(vector<int>& nums) {
       int s=0,m=*min_element(nums.begin(),nums.end());
        for(auto x:nums)
            s+=x-m;
        return s;
    }
};