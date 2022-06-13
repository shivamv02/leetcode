class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        vector<int> v;
        for(auto x:s)
            v.push_back(x-'0');
        int i=0,j=0,c=0,no=0;
        while(j<v.size())
        {
            
            no=no*10+v[j];
          
            if(j-i+1<k)
                j++;
           else if(j-i+1==k)
            {
               if(no!=0 and num%no==0)
                   c++;
                no=no-v[i]*pow(10,k-1);
                j++;
                i++;
                
            }
              cout<<no<<" ";
        
        }
        return c;
        
    }
};