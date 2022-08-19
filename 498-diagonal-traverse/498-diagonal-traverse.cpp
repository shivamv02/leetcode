class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
     map<int,vector<int>> mp;
        int n=mat.size(),sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
            
                
                    mp[i+j].push_back(mat[i][j]);
                    
                
            }
            
            
        }
        vector<int> v;
        for(auto x:mp)
        {
            if(x.first%2==0)
                reverse(x.second.begin(),x.second.end());
            for(auto y:x.second)
                v.push_back(y);
        
        }
        
                    
        return v;
            
                
    }
};