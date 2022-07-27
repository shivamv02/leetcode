class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;
        for(char x:s)
            mp[x]++;
        priority_queue<pair<int,char>> pq;
        
        for(auto x:mp)
            pq.push({x.second,x.first});
        string str;
        while(pq.size()>1)
        {
            
          auto a=pq.top(); 
           pq.pop();
           auto b=pq.top();
           pq.pop();
            
            str+=a.second;
            str+=b.second;
            if(a.first>1)
                pq.push({--a.first,a.second});
            
            
            if(b.first>1)
                pq.push({--b.first,b.second});
            
           
        }
        if(pq.size()==1)
        {   
        if(pq.top().first>1)
            return "";
        else
        {
            str+=pq.top().second;
            return str;
        }
            
        }
        return str;
        
    }
};