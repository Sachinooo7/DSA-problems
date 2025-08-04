class Solution {
public:

int solve(vector<vector<int>>& grid,int i,int j,vector<vector<int>>&vis){
    int r=grid.size();
    int c=grid[0].size();

    queue<vector<int>>q;
     for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==2){
                 q.push({i,j,0});  
                 vis[i][j]=2; 
                }
            }
        }


int mx=0;
    while(!q.empty()){
        auto t=q.front(); q.pop();
        int x=t[0];
        int y=t[1];
        int cnt=t[2];
        mx=max(mx,cnt);
        

        if( x+1<r && grid[x+1][y]==1 && vis[x+1][y]!=2){
            grid[x+1][y]=2;
            vis[x+1][y]=2;
            q.push({x+1,y,cnt+1});
        }
         if(  x-1>=0 && grid[x-1][y]==1 && vis[x-1][y]!=2){
            grid[x-1][y]=2;
            vis[x-1][y]=2;
            q.push({x-1,y,cnt+1});
        }
         if(  y+1<c && grid[x][y+1]==1 && vis[x][y+1]!=2 ){         
            grid[x][y+1]=2;
            vis[x][y+1]=2;
            q.push({x,y+1,cnt+1});
        }
         if(  y-1>=0 && grid[x][y-1]==1 && vis[x][y-1]!=2 ){
            grid[x][y-1]=2;
            vis[x][y-1]=2;
            q.push({x,y-1,cnt+1});
        }
    }
    return mx;
}
    int orangesRotting(vector<vector<int>>& grid) {
         int r=grid.size();
    int c=grid[0].size();

vector<vector<int>>vis(r,vector<int>(c,0));
         int mx=solve(grid,0,0,vis);
         for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1 && vis[i][j]!=2){
return -1;
                }
            }
        }
        return mx;
    }
};