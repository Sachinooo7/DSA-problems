class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        
        int r=grid.size();
        int c=grid[0].size();
        int m=k/2;

        for(int i=0;i<m;i++){
            for(int j=0;j<k;j++){
                swap(grid[i+x][j+y],grid[x+k-1-i][j+y]);
            }
        }
        return grid;
            }
};