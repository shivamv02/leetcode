class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& p, string s) {
        vector<vector<string>> vvs;
        vector<string> vs;
     sort(p.begin(),p.end());
        int l=0,r=p.size()-1;
        for(int i=0;i<s.size();i++)
        {
            while(l<=r and (p[l].length() == i or p[l][i]<s[i]))
            l++;
            while(r>=l and (p[r].length() == i or p[r][i]>s[i]))
            r--;
         for(int j=0;j<3 and l+j<=r;j++)
               vs.push_back(p[l+j]);
            vvs.push_back(vs);
            vs.clear();
       
        }
         return vvs;
    }
};