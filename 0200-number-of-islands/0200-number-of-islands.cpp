class Solution {
public:
bool valid(int x,int y,vector<vector<char>>& grid,int n,int m){
    if(x<0 || x>=n || y<0||y>=m || grid[x][y]=='0' || grid[x][y]=='2'){
        return false;
    }
    return true;
}
void solve(vector<vector<char>>& grid,int i,int j,int n,int m){
    queue<pair<int,int>>q;
    q.push({i,j});

    while(!q.empty()){
        auto t=q.front(); q.pop();
        int x=t.first;
        int y=t.second;

        if(valid(x+1,y,grid,n,m)){

            q.push({x+1,y});
        grid[x+1][y]='2';
        }
        if(valid(x,y+1,grid,n,m)){
            q.push({x,y+1});
            grid[x][y+1]='2';
        }
        if(valid(x,y-1,grid,n,m)){
            q.push({x,y-1});
            grid[x][y-1]='2';
        }
        if(valid(x-1,y,grid,n,m)){
            q.push({x-1,y});
            grid[x-1][y]='2';
        }
    }


}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if( grid[i][j]=='1'){
                    c++;
                    solve(grid,i,j,n,m);
                }
            }
        }
        return c;
    }
};