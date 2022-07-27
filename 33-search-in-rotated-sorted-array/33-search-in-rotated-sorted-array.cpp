class Solution {
public:
    int search(vector<int>& nums, int target) {
   int l=0,h=nums.size()-1;
        while(l<h)
        {
            int mid=l+(h-l)/2;
            
             if(nums[mid]>nums[h])
            {
                l=mid+1;
            }
            else
                h=mid;
        }
        
        int rotate=l;
        l=0,h=nums.size()-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
              int realmid=(mid+rotate)%nums.size();
            if(nums[realmid]==target)
                return realmid;
            else if(nums[realmid]>target)
            {
                h=mid-1;
            }
            else
                l=mid+1;
        }
        
        return -1;
        
    }
};