class Solution {
public:
    bool isPalindrome(string s1) {
        string s;
        for(auto x:s1)
            if(isalpha(x) or isdigit(x))
                s+=x;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
       
        int l=0,h=s.size()-1;
        while(l<h)
        {
            
            if(s[l]!=s[h])
                return 0;
            else{
                l++;
                h--;
            }
            
        }
        return 1;
    }
};