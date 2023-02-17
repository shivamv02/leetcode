//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int k, vector<long long> v) {
        // code here
        long long sum=0,s=0;
        int i=0,j=0;
        while(j<N)
        {
            sum+=v[j];
            if(j-i+1==k)
            {
                v.push_back(sum);
                sum-=v[i];
                i++;
                j++;
                
            }
            else
            j++;
            
        }
        return v[N-1];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends