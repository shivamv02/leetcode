class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<pair<int,int>> v;
        for(int i=0;i<m.size();i++)
            for(int j=0;j<m[0].size();j++)
            {
                if(m[i][j]==0)
                    v.push_back({i,j});
            }
        for(auto x:v)
        for(int i=0;i<m.size();i++)
            for(int j=0;j<m[0].size();j++)
            {
                if(x.first==i and x.second ==j)
                {
                    for(int k=0;k<m[0].size();k++)
                        m[i][k]=0;
                for(int l=0;l<m.size();l++)
                    m[l][j]=0;
                }
            }
    }
};