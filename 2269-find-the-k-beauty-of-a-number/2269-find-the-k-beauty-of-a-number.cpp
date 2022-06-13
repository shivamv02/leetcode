class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int i=0,j=0,c=0,no=0;
        while(j<s.size())
        {
            
            no=no*10+(s[j]-'0');
          
            if(j-i+1<k)
                j++;
           else if(j-i+1==k)
            {
               if(no!=0 and num%no==0)
                   c++;
                no=no-(s[i]-'0')*pow(10,k-1);
                j++;
                i++;
                
            }
              
        
        }
        return c;
        
    }
};