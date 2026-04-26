class Solution {
public:

    bool find(int i, int j, vector<vector<char>>& grid, vector<vector<bool>>& vis) {

        queue<vector<int>>q;
        int r=grid.size();
        int c=grid[0].size();
        q.push({i,j,-1,-1});
        vis[i][j]=1;
        int dirs[4][2] = {{-1,0}, {1,0}, {0,-1}, {0,1}};

        while(!q.empty()){

            auto t=q.front(); q.pop();
            int x=t[0];
            int y=t[1];
            int px=t[2];
            int py=t[3];

            for(auto d:dirs){
                int nx=x+d[0];
                int ny=y+d[1];

                if(nx<0 || nx>=r || ny<0 || ny>=c )continue;
                if(nx==px && ny==py)continue;
                if(grid[x][y]!=grid[nx][ny])continue;
                if(vis[nx][ny])return true;

                vis[nx][ny]=true;
                q.push({nx,ny,x,y});
            }
        }
        return false;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<bool>>vis(r,vector<bool>(c,0));

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(!vis[i][j]){
                    if(find(i,j,grid,vis))return true;
                }
            }
        }
        return false;
        
    }
};