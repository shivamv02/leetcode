//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        deque<int> q;
        q.push_front(arr[0]);
        for(int i=1;i<arr.size();i++)
        {
            if(!q.empty() and ((q.back()>=0 and arr[i]<0) or (q.back()<0 and arr[i]>=0)))
            {
                q.pop_back();
                
            }
            else
            {
                q.push_back(arr[i]);
            }
        }
        vector<int> v;
        while(!q.empty())
        {
            v.push_back(q.front());
            q.pop_front();
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends