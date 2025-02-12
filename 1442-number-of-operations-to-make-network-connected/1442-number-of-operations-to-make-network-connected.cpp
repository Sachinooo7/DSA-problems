
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
        if (parent[x] != x)
            parent[x] = find(parent[x]); // Path Compression
        return parent[x];
    }

    void unionSet(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
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
    int makeConnected(int n, vector<vector<int>>& connect) {
        int ext=0;
        DisjointSet ds(n);
        for(auto t:connect){
            int u=t[0];
            int v=t[1];
            if(ds.find(u)==ds.find(v)){
                ext++;
            }
            else{
                ds.unionSet(u,v);
            }
        }

        int c=0;
        for(int i=0;i<n;i++){
            if(ds.find(i)==i) c++;
        }
        if(ext>=c-1) return c-1;
        return -1;
    }
};