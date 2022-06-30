class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int mini=INT_MAX;
        vector<long long int> v;
        for(auto x:nums)
        {
           long long int s=0;
            for(auto y:nums)
                s+=abs(y-x)%1000000007;
            v.push_back(s);
        }
        sort(v.begin(),v.end());
        return v[0];
    }
};