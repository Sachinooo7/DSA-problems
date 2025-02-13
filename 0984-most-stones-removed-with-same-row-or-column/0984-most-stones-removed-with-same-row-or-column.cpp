class DisjointSet {
public:
    vector<int> parent, rank;
    
    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) 
            parent[i] = i;
    }

    int find(int x) {
        if (x < 0 || x >= parent.size()) return -1; // Prevent out-of-bounds access

        if (parent[x] != x) 
            parent[x] = find(parent[x]); // Path Compression

        return parent[x];
    }

    void unionSet(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX == -1 || rootY == -1) return; // Ignore invalid indexes

        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY])
                parent[rootY] = rootX;
            else if (rank[rootX] < rank[rootY])
                parent[rootX] = rootY;
            else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int maxRow = 0, maxCol = 0;

        // Find max row and column values
        for (auto& stone : stones) {
            maxRow = max(maxRow, stone[0]);
            maxCol = max(maxCol, stone[1]);
        }

        // Ensure sufficient size for Disjoint Set
        int n = maxRow + maxCol + 2;
        DisjointSet ds(n);
        unordered_set<int> uniqueRoots;

        // Union rows and columns
        for (auto& stone : stones) {
            int r = stone[0];
            int c = stone[1] + maxRow + 1; // Shift column index
            ds.unionSet(r, c);
        }

        // Count unique connected components
        for (auto& stone : stones) {
            uniqueRoots.insert(ds.find(stone[0]));
        }

        int numComponents = uniqueRoots.size();
        return stones.size() - numComponents;
    }
};