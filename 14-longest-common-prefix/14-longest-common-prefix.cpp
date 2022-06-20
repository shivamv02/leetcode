class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int l=0,h=strs.size()-1;
        string s;
        for(int i=0;i<strs[0].size();i++)
        {
            if(strs[l][i]==strs[h][i]) 
                s+=strs[l][i];
            else
                break;
        }
        return s;
    }
};