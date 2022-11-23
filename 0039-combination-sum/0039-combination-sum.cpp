class Solution {
public:
    vector<vector<int>> vv;
    void f(int i,int n,vector<int> &arr,vector<int> &v,int sum)
    {
        if(i==n or sum<=0)
         {
            if(sum==0)
            vv.push_back(v);
            return;
         }
        if(arr[i]<=sum)
        {
        v.push_back(arr[i]);
        f(i,n,arr,v,sum-arr[i]);
        v.pop_back();
        }
        f(i+1,n,arr,v,sum);
        
     }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        f(0,candidates.size(),candidates,v,target);
        return vv;
    }
};