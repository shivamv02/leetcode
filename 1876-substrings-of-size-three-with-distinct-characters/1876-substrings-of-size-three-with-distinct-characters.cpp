class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0,j=0,c=0;
        while(j<s.size())
        {
            if(j-i+1<3)
                j++;
            else if(j-i+1==3)
            {
                if(s[j-2]!=s[j-1] and s[j-1]!=s[j] and s[j-2]!=s[j])
                    c++;
                i++;
                j++;
            }
        }
        return c;
        
    }
};