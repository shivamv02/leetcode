class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto x:s)mp[x]++;
        priority_queue<pair<int,char>> q;
        for(auto x:mp)
            q.push({x.second,x.first});
        string str="";
        while(!q.empty())
        {
            str+=string(q.top().first,q.top().second);
            q.pop();
        }
        return str;
    }
};