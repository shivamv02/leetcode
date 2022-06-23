class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int c=0,f=0;
        for(auto x:s)
        {
            mp[x]++;
        }
        if(mp.size()==1)
            return s.size();
        for(auto x:mp)
        {
            if(x.second%2==0)
            {
                c+=x.second;
                
            }
            else
            {
                c+=x.second-1;
                f=1;
            }
        }
        if(f) return c+1;
        return c;
    }
};