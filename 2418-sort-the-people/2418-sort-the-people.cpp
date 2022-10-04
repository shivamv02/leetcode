class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        vector<pair<int,string>>v ;
        for(int i=0;i<n.size();i++){
            v.push_back({h[i],n[i]}) ;
        }
        sort(v.begin(),v.end(),greater<pair<int,string>>()) ;
        vector<string>ans ;
        for(auto x:v){
            ans.push_back(x.second) ;
        }
        return ans ;
    }
};