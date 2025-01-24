class Solution {
public:

bool check(int x,int y,vector<vector<int>>& grid){
    int r=grid.size();
    int c=grid[0].size();
    if(x<0 || x>=r ||y<0 || y>=c) return false;
    if(grid[x][y]==0) return true;
    return false;
}
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0] || grid[n-1][n-1]) return -1;

        queue<pair<int,pair<int,int>>>q;
        vector<vector<int>>v(grid.size(),vector<int>(grid[0].size(),INT_MAX));

        q.push({1,{0,0}});
        v[0][0]=1;


        while(!q.empty()){
            auto t=q.front(); q.pop();
            int val=t.first;
            int x=t.second.first;
            int y=t.second.second;
             if (x == n-1 && y == n-1) return val;


            if(check(x,y+1,grid )&& val+1<v[x][y+1]){
                q.push({val+1,{x,y+1}});
                v[x][y+1]=val+1;
            } 
            if(check(x,y-1,grid) && val+1<v[x][y-1]){
                q.push({val+1,{x,y-1}});
                v[x][y-1]=val+1;
            } 
            if(check(x+1,y,grid) && val+1<v[x+1][y]){
                q.push({val+1,{x+1,y}});
                v[x+1][y]=val+1;
            } 
            if(check(x-1,y,grid)&& val+1<v[x-1][y]){
                q.push({val+1,{x-1,y}});
                v[x-1][y]=val+1;
            } 
            if(check(x-1,y+1,grid) && val+1<v[x-1][y+1]){
                q.push({val+1,{x-1,y+1}});
                v[x-1][y+1]=val+1;
            } 
            if(check(x-1,y-1,grid )&& val+1<v[x-1][y-1]){
                q.push({val+1,{x-1,y-1}});
                v[x-1][y-1]=val+1;
            } 
            if(check(x+1,y-1,grid) && val+1<v[x+1][y-1]){
                q.push({val+1,{x+1,y-1}});
                v[x+1][y-1]=val+1;
            } 
            if(check(x+1,y+1,grid)&& val+1<v[x+1][y+1]){
                q.push({val+1,{x+1,y+1}});
                v[x+1][y+1]=val+1;
            } 


        }
        return -1;
    }
};