class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1 ;
        int upper = -1,lower= -1 ;
        while(l<=r){
            int mid = l+(r-l)/2 ;
            if(nums[mid]>=target)
            {
                lower = mid ;
                r = mid-1 ;
            }
            else{
                l = mid+1 ;
            }
        }
        l=0,r= nums.size()-1 ;
        while(l<=r){
            int mid = l+(r-l)/2 ;
            if(nums[mid]<=target)
            {
                upper = mid ;
                l = mid+1 ;
            }
            else{
                r = mid-1 ;
            }
        }
        if(lower!=-1&&nums[lower]!=target) lower =-1 ;
        if(upper!=-1&&nums[upper]!=target) upper =-1 ;
        return {lower,upper};
    }
};