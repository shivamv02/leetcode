class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int> v;
        int top=0,down=m.size()-1,left=0,right=m[0].size()-1,d=0;
        while(top<=down and left<=right)
        {
            if(d==0)
            {
                for(int i=left;i<=right;i++)
                    v.push_back(m[top][i]);
                top++;
           }
            else if(d==1)
                 {
                for(int i=top;i<=down;i++)
                    v.push_back(m[i][right]);
                right--;
           }
            else if(d==2)
                 {
                for(int i=right;i>=left;i--)
                    v.push_back(m[down][i]);
                down--;
           }
            else if(d==3)
                 {
                for(int i=down;i>=top;i--)
                    v.push_back(m[i][left]);
                    left++;
           }
            d=(d+1)%4;
        }
        return v;
        
    }
};