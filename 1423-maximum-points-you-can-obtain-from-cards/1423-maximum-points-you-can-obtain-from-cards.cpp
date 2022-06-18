class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        long long int i=0,j=0,s=0,maxi=0,ws=0;
        if(c.size()==1)
            return c[0];
      
        
        for(auto x:c)
            s+=x;
         if(k==c.size())
            return s;
        while(j<c.size())
        {
            ws+=c[j];
            if(j-i+1<c.size()-k)
                j++;
            else if(j-i+1==c.size()-k)
           {
               maxi=max(maxi,(s-ws));
                 ws-=c[i];
               i++;
               j++;
           }
        }
        return maxi;
        
    }
};