class Solution {
public:
    int longestSubarray(vector<int>& nums) {
          int mx = INT_MIN ;
        for(int i=0;i<nums.size();i++){
            mx = max(mx,nums[i]) ;
        }
        int c= 0,m = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mx){
                c=0 ;
                while(i<nums.size()&&nums[i]==mx){
                    i++ ;
                    c++ ;
                }
                m = max(m,c) ; 
            }
        }
        return m ;
    }
};