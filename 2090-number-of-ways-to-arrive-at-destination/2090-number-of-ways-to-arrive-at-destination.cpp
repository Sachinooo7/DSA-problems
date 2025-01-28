class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        int m=pow(10,9)+7;
        vector<long long>vis(n,LLONG_MAX);
                priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> q;
            //  queue<pair<int,int>>q;
        vector<vector<pair<int,int>>>adj(n);
        for(auto t:roads){
            adj[t[0]].push_back({t[1],t[2]});
            adj[t[1]].push_back({t[0],t[2]});

        }
        vector<int>ways(n,0);
        vis[0]=0;
        ways[0]=1;
        q.push({0,0});
        int c=0;
        while(!q.empty()){
            auto t=q.top(); q.pop();
            long long time=t.first;
            int node=t.second;
            if(time>vis[node]) continue;
            for(auto x:adj[node]){
                long long h=time+x.second;
                if(h<vis[x.first]){
                    ways[x.first]=ways[node];
                    q.push({h,x.first});
                    vis[x.first]=h;
                    }
                   else if(vis[x.first]==h) {
                   ways[x.first]=(ways[x.first]+ways[node])%m;
                    }
                    
                }
            }
        
        
        return ways[n-1];
    }
};



