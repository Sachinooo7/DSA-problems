class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int>vis(n,INT_MAX);
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0;i<flights.size();i++){
                adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
            
        }

// priority_queue<pair<pair<int, int>, int>, vector<pair<pair<int, int>, int>>, greater<>> q;
queue<pair<pair<int, int>, int>>q;
        q.push({{0,src},-1});
        vis[src]=0;

        while(!q.empty()){
            auto t=q.front(); q.pop();
            int cost=t.first.first;
            int ind=t.first.second;
            int a=t.second;
            // if(ind==dst && q.empty()){
            //     return cost;
            // }
            if (a > k) continue; // Exceeds maximum allowed stops


            for(auto x:adj[ind]){
                if(cost+x.second<vis[x.first] && a<k ){
                    q.push({{cost+x.second,x.first},a+1});
                    vis[x.first]=cost+x.second;
                }
            }
        }
        if(vis[dst]!=INT_MAX) return vis[dst];

return -1;
    }
};