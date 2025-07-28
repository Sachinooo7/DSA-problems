class Solution {
public:

void solve(vector<vector<char>>& grid,int i,int j,int r,int c){
    queue<pair<int,int>>q;
    q.push({i,j});

    while(!q.empty()){
        auto t=q.front(); q.pop();
        int x=t.first;
        int y=t.second;
        // grid[x][y]='2';

        if(y+1<c && grid[x][y+1]=='1'  ){
            q.push({x,y+1});         grid[x][y+1]='2';

        }
        if(y>0 && grid[x][y-1]=='1'){
            q.push({x,y-1});         grid[x][y-1]='2';

        }
        if(x+1<r && grid[x+1][y]=='1'){
            q.push({x+1,y});         grid[x+1][y]='2';

        }
        if(x>0 && grid[x-1][y]=='1' ){
            q.push({x-1,y});         grid[x-1][y]='2';

        }

    }
}
    int numIslands(vector<vector<char>>& grid) {

        int r=grid.size();
        int c=grid[0].size();


        int res=0;

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'){
                    solve(grid,i,j,r,c);
                    res++;
                }
            }
        }
        return res;
    }
};