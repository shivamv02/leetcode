//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void sub(int i,vector<int> &arr,vector<int> &ds,int sum,vector<int> &vv,int N)
    {
        if(i==N)
        {
        vv.push_back(sum);
        return ;
        }
        
        ds.push_back(arr[i]);
        sub(i+1,arr,ds,sum+arr[i],vv,N);
        ds.pop_back();
        sub(i+1,arr,ds,sum,vv,N);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ds,vv;
        
        sub(0,arr,ds,0,vv,N);
        
        return vv;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends