//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
     pair<int,int> solve(int i, int j,vector<vector<int>>&mat,int r, int c,int dir)

    {

        if(mat[i][j]==0)

        {

            if(dir==0)

            {

                if(j+1>=c)

                return {i,j};

                solve(i,j+1,mat,r,c,dir);

            }

            else if(dir==1)

            {

                if((j-1)<0)

                return {i,j};

                solve(i,j-1,mat,r,c,dir);

            }

            else if(dir==2)

            {

                if(i+1>=r)

                return {i,j};

                solve(i+1,j,mat,r,c,dir);

            }

            else {

                if(i-1<0)

                return {i,j};

                solve(i-1,j,mat,r,c,dir);

            }

        }

        else 

        {

            mat[i][j]=0;

            if(dir==0)

            {

                if(i+1>=r)

                return {i,j};

                solve(i+1,j,mat,r,c,2);

            }

            else if(dir==1)

            {

                if(i-1<0)

                return {i,j};

                solve(i-1,j,mat,r,c,3);

            }

            else if(dir==2)

            {

                if((j-1)<0)

                return {i,j};

                solve(i,j-1,mat,r,c,1);

            }

            else {

                if(j+1>=c)

                return {i,j};

                solve(i,j+1,mat,r,c,0);

            }

        }

    }

    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){

        //code here

        return solve(0,0,matrix,R,C,0);

        

    }
};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends