class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
      vector<int> curr;
        vector<vector<int>> v;
        curr=intervals[0];
        int maxi=curr[1];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=curr[1])
            {
                curr[1]=max(curr[1],intervals[i][1]);
                
            }
            else
            {
                v.push_back(curr);
                curr=intervals[i];
            }
        }
        v.push_back(curr);
        return v;
    }
};