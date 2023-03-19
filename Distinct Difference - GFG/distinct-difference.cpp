//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        // code here
        vector<int> l,r,v;
        l.push_back(0);
        
        unordered_set<int> s;
        for(int i=0;i<N-1;i++)
        {
            s.insert(A[i]);
            l.push_back(s.size());
            
        }
        s.clear();
        r.push_back(0);
        reverse(A.begin(),A.end());
        for(int i=0;i<N-1;i++)
        {
            s.insert(A[i]);
            r.push_back(s.size());
            
        }
        reverse(r.begin(),r.end());
        for(int i=0;i<N;i++)
        {
        v.push_back(l[i]-r[i]);
        }
        return v;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        vector<int> res = obj.getDistinctDifference(N, A);
        
        Array::print(res);
        
    }
}

// } Driver Code Ends