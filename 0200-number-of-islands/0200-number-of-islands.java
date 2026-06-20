class Solution {
    boolean check(char[][]grid,boolean [][] vis ,int x,int y){
        int n=grid.length;
        int m=grid[0].length;

        if(x<0 || x>=n || y<0 || y>=m || grid[x][y]=='0'|| vis[x][y]==true)return false;
        return true;
    }
    void solve(char[][]grid,boolean [][] vis ,int i,int j){

        vis[i][j]=true;

        int []fir={1,-1,0,0};
        int []sec={0,0,1,-1};

        for(int a=0;a<4;a++){
            int x=i+fir[a];
            int y=j+sec[a];

            if(check(grid,vis,x,y)){
                solve(grid,vis,x,y);
            }
        }

    }
    public int numIslands(char[][] grid) {
        int n=grid.length;
        int m=grid[0].length;
        boolean [][]vis=new boolean[n][m];

        int c=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]!=true && grid[i][j]=='1'){
                    solve(grid,vis,i,j);
                    c++;
                }
            }
        }
        return c;
        
    }
}