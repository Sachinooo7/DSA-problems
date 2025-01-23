class Solution {
public:

void dfs(int i,vector<vector<int>>&adj,vector<int>&vis,vector<int>&path,bool& b){
    vis[i]=1;
    path[i]=1;
    for(auto x:adj[i]){
        if(!vis[x]){
            dfs(x,adj,vis,path,b);
            if(!b) return;
        
        }
        else if(path[x]){
            b=0;
            return;
        }
    }
    path[i]=0;
}

    bool canFinish(int n, vector<vector<int>>& pre) {

 vector<vector<int>>adj(n);       
for(int i=0;i<pre.size();i++){
    adj[pre[i][1]].push_back(pre[i][0]);

}
        vector<int>vis(n,0);
        vector<int>path(n,0);
bool b=true;
        for(int i=0;i<n;i++){
            if(!vis[i])
            {
             dfs(i,adj,vis,path,b);
                if(!b) return false;
            }
        }
        return true;
    }
};