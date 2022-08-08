class Solution {
public:
    bool isSubsequence(string s, string t) {
      int l=0;
        if(s==t)return true;
        for(int i=0;i<t.size();i++)
        {
            if(t[i]==s[l])l++;
            if(l==s.size())return true;
        }
        return false;
    }
};