class Solution {
public:
    string reverseWords(string s) {
       vector<string> v;
        string str;
        for(int i=0;i<s.size();i++)
        {
            if(isspace(s[i])) continue;
             
                str+=s[i];
            if(i+1==s.size() or isspace(s[i+1])) 
            {
                v.push_back(str);
                str.erase();
            }
        }
        str.erase();
        for(int i=v.size()-1;i>=0;i--)
        {
            str+=v[i];
            if(i>=1)
            str+=" ";
        }
        return str;
    }
};