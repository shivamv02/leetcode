class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> a(n),b(n);
        a[0]=1;b[n-1]=1;
        for(int i=1;i<nums.size();i++)
        {
            a[i]=nums[i-1]*a[i-1];
            b[n-i-1]=nums[n-i]*b[n-i];
        }
        for(int i=0;i<n;i++)
            nums[i]=a[i]*b[i];
        return nums;
        
    }
};