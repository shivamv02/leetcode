class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    vector<vector<int>> v;
        for(auto x:matrix)
            v.push_back(x);
        for(int j=0;j<matrix.size();j++)
        for(int i=matrix.size()-1;i>=0;i--)
           matrix[j][matrix.size()-1-i]=v[i][j];
    
    }
};