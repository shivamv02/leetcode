class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string s="";
        solve(0,0,n,s,res);
        return res;
    }
    void solve(int op, int cl, int n, string &s,vector<string> &res){
        if(cl == n && op == n){
            res.push_back(s);
            return;
        }
        if(op<n){
            s.push_back('(');
            solve(op+1,cl,n,s,res);
            s.pop_back();
        }
        if (cl<op){
            s.push_back(')');
            solve(op,cl+1,n,s,res);
            s.pop_back();
        }
    }
};