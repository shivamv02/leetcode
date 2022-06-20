class Solution {
public:
    bool isValid(string str) {
        stack<int> s;
        
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='{' or str[i]=='[' or str[i]=='(')
                s.push(str[i]);
            else
            {
                if(s.empty() and (str[i]=='}' or str[i]==')' or str[i]==']'))
                    return false;
                if((s.top()=='(' and str[i]!=')') or (s.top()=='[' and str[i]!=']') or                          (s.top()=='{' and str[i]!='}'))
                    return false;
                s.pop();
            }
        }
        if(s.empty())
        return true;
        else
            return false;
    }
    
};