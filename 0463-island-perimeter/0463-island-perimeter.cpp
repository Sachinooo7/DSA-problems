class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {

        int cnt=0;
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<int>>vis(r,vector<int>(c,0));
        queue<pair<int,int>>q;
        bool f=0;

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]){
                    q.push({i,j});
                    vis[i][j]=1;
                    f=1;
                    break;

                }
            }
            if(f) break;
        }

        while(!q.empty()){
            auto t=q.front(); q.pop();
            int x=t.first;
            int y=t.second;

            int ar[4]={1,0,-1,0};
            int ac[4]={0,1,0,-1};
            int p=0;
            for(int i=0;i<4;i++){
                int nx=x+ar[i];
                int ny=y+ac[i];
                
                if(  nx>=r || nx<0 || ny<0 || ny>=c|| !grid[nx][ny]){
                    p++;   
                    }
                    else if(!vis[nx][ny]) {
                        q.push({nx,ny});
                        vis[nx][ny]=1;
                        }
                         }
                    cnt+=p; 
        }
        return cnt;
        }
    
};