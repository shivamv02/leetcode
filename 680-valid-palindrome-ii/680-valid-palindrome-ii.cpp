class Solution {
public:
    bool validPalindrome(string s) {
   int i=0, j=s.length()-1;
        
        while(i < j)
        {
            if (s[i] != s[j])
                break;
            
            i++;
            j--;     
        }
        
        if (i >= j)
            return true;
        
        string s1 = s.substr(i+1, j - i);      
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        if(s1 == s2)
            return true;
        
        s1 = s.substr(i, j-i);
        s2 = s1;
        reverse(s2.begin(), s2.end());
        
        return s1 == s2;       
    }
};