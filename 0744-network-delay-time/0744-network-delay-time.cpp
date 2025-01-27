class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<int>vis(n+1,INT_MAX);
        queue<pair<int,int>>q;
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto t:times){
            adj[t[0]].push_back({t[1],t[2]});
        }
        vis[k]=0;
        q.push({0,k});
        while(!q.empty()){
            auto t=q.front(); q.pop();
            int time=t.first;
            int node=t.second;

            for(auto x:adj[node]){
                if(time+x.second<vis[x.first]){
                    q.push({time+x.second,x.first});
                    vis[x.first]=time+x.second;
                }
            }
        }
        int mx=0;
        for(int i=1;i<n+1;i++){
        if(vis[i]==INT_MAX) return -1;
        else{
            mx=max(mx,vis[i]);
        }
        }
        return mx;
    }
};