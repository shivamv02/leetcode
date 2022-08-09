class Solution {
public:
    int longestSubstring(string s, int k) {
        if(k==1) return s.size();
        if(k>s.size()) return 0;
        int n=s.size();
        unordered_map<char,int>mp;
        for(char x:s)mp[x]++;
        int l=0,ls=0;
        while(l<n and mp[s[l]]>=k)l++;
        if(l>=n-1) return l;
        ls=longestSubstring(s.substr(0,l),k);
        while(l<n and mp[s[l]]<k)l++;
        int rs=l<n?longestSubstring(s.substr(l),k):0;
        return max(ls,rs);
    }
};