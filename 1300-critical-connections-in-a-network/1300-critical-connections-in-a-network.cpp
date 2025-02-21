class Solution {
    int timer=1;
public:
void dfs(int low[],int tin[],vector<int>adj[],vector<int>&vis,vector<vector<int>>&bridge
,int node,int par ){
vis[node]=1;
tin[node]=low[node]=timer;
timer++;

for(auto it:adj[node]){
    if(it==par) continue;
    if(!vis[it]){
        dfs(low,tin,adj,vis,bridge,it,node);
        low[node]=min(low[node],low[it]);
        if(low[it]>tin[node]){
            bridge.push_back({it,node});
        }
    }
    else{
        low[node]=min(low[node],low[it]);
    }
}
}
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& conns) {
        
        vector<int>adj[n];
        for(auto t:conns){
            adj[t[0]].push_back(t[1]);
            adj[t[1]].push_back(t[0]);
        }
        vector<int>vis(n,0);
        int low[n];
        int tin[n];
        vector<vector<int>>bridge;
        dfs(low,tin,adj,vis,bridge,0,-1);
        return bridge;
    }
};