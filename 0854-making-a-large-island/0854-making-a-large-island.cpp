
class DisjointSet {
public:
    vector<int> rank, parent, size;
    
    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        size.resize(n, 1); // Initialize size of each component as 1
        for (int i = 0; i < n; i++) 
            parent[i] = i;
    }

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]); // Path Compression
        return parent[x];
    }

    void unionSet(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
                size[rootX] += size[rootY]; // Merge sizes
            } 
            else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
                size[rootY] += size[rootX]; // Merge sizes
            } 
            else {
                parent[rootY] = rootX;
                size[rootX] += size[rootY]; // Merge sizes
                rank[rootX]++;
            }
        }
    }
};

class Solution {
    bool valid(int x, int y, int n) {
        return (x >= 0 && x < n && y >= 0 && y < n);
    }
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        DisjointSet ds(n * n);
        int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        // Step 1: Merge existing 1s into components
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) continue;
                int node = i * n + j;

                for (auto &dir : directions) {
                    int r = i + dir[0];
                    int c = j + dir[1];
                    int adj = r * n + c;
                    if (valid(r, c, n) && grid[r][c] == 1) {
                        ds.unionSet(node, adj);
                    }
                }
            }
        }

        // Step 2: Try flipping each 0 to 1 and calculate max island size
        int maxSize = 0;
        bool hasZero = false;
        for (int x = 0; x < n; x++) {
            for (int y = 0; y < n; y++) {
                if (grid[x][y] == 1) continue; // Skip existing land
                hasZero = true;
                
                set<int> components;
                for (auto &dir : directions) {
                    int r = x + dir[0];
                    int c = y + dir[1];
                    int adj = r * n + c;
                    if (valid(r, c, n) && grid[r][c] == 1) {
                        components.insert(ds.find(adj));
                    }
                }

                int newSize = 1; // Include the flipped cell
                for (int comp : components) {
                    newSize += ds.size[comp];
                }

                maxSize = max(maxSize, newSize);
            }
        }

        // If no zero is found, entire grid is already one large island
        return hasZero ? maxSize : n * n;
    }
};