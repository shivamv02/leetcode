class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
       
        int col=1;
    
        for(int i=0;i<m.size();i++)
        {
            if(m[i][0]==0) col=0;
            for(int j=1;j<m[0].size();j++)
            if(m[i][j]==0)
                m[0][j]=m[i][0]=0; 
        }
        for(int i=m.size()-1;i>=0;i--)
        { 
            for(int j=m[0].size()-1;j>=1;j--)
            {
                if(m[i][j]!=0 and (m[0][j]==0 or m[i][0]==0))
                    m[i][j]=0;
              
            }
            if(col==0)
            m[i][0]=0;
        }
     
          
        
    }
};