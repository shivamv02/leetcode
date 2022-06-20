class Solution {
public:
    bool isIsomorphic(string s, string t) {
 unordered_map<char,int>sm;
        unordered_map<char,int>tm;
        
        for(int i=0; i<s.size(); i++){
            if(sm[s[i]] != tm[t[i]]) 
            {  
                return false;
            }
            else
            {
                sm[s[i]] = i+3;
                tm[t[i]] = i+3;
            }
        }
        return true;
    
    }
};