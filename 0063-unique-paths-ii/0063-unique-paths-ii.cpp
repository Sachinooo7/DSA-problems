class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int r = grid.size(), c = grid[0].size();
        if (grid[0][0] == 1) return 0;  // Start position blocked

        // DP Initialization
        grid[0][0] = 1;
        for (int i = 1; i < c; i++)
            grid[0][i] = (grid[0][i] == 1) ? 0 : grid[0][i - 1];
        
        for (int i = 1; i < r; i++)
            grid[i][0] = (grid[i][0] == 1) ? 0 : grid[i - 1][0];

        // DP Calculation
        for (int i = 1; i < r; i++) {
            for (int j = 1; j < c; j++) {
                if (grid[i][j] == 1) {
                    grid[i][j] = 0;
                } else {
                    grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
                }
            }
        }

        return grid[r - 1][c - 1];
    }
};