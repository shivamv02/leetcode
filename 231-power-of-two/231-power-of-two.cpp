class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        int c=0;
       while(n)
       {
           if(n&1)
               c++;
           if(c>1) return false;
           n=n>>1;
       }
        return true;
    }
};