class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        

 int n = grid.size();
    unordered_map<int, vector<int>> diagonals;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            diagonals[i - j].push_back(grid[i][j]);
        }
    }

    for (auto& [key, diag] : diagonals) {
        if (key < 0)
            sort(diag.begin(), diag.end()); 
        else
            sort(diag.rbegin(), diag.rend()); 
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
               grid[i][j] = diagonals[i - j].front();
            diagonals[i - j].erase(diagonals[i - j].begin());
        }
    }
    return grid;

    }
};