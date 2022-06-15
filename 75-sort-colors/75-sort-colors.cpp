class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,w=0,b=0;
        for(auto x:nums)
        {
            if(x==0)
                r++;
            else if(x==1)
                w++;
            else
                b++;
        }
        cout<<r<<w<<b;
        for(int i=0;i<nums.size();i++)
        {
            if(r)
            {
                nums[i]=0;
                r--;
            }
            else if(w)
            {
                nums[i]=1;
                w--;
            }
            else
            {
                nums[i]=2;
                b--;
            }
        }
        
    }
};