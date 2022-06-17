class Solution {
public:
    int maxArea(vector<int>& h) {
   int maxi=-1;
      int l=0,r=h.size()-1;
          while(l<r)
          {
              int mh=min(h[l],h[r]);
              maxi=max(((r-l)*mh),maxi);
              if(mh==h[l])
                  l++;
              else
                  r--;
          }
        return maxi;
    }
};