class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int mini=INT_MAX;
        vector<long long int> v;
        for(auto x:nums)
        {
           long long int s=0;
            for(auto y:nums)
                s+=abs(y-x);
            v.push_back(s);
        }
     return *min_element(v.begin(),v.end());
    }
};