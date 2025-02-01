class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int d) {
        

        vector<vector<pair<int, int>>> adj(n);
        for (auto& t : edges) {
            adj[t[0]].push_back({t[1], t[2]});
            adj[t[1]].push_back({t[0], t[2]});
        }

        int minCity = -1, minCount = n; 

        for (int i = 0; i < n; i++) {
            vector<int> dist(n, INT_MAX);
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
            
            dist[i] = 0;
            pq.push({0, i}); 

            while (!pq.empty()) {
                auto [val, node] = pq.top();
                pq.pop();

                if (val > dist[node]) continue;  

                for (auto [neighbor, weight] : adj[node]) {
                    int newDist = val + weight;
                    if (newDist < dist[neighbor] && newDist <= d) {
                        dist[neighbor] = newDist;
                        pq.push({newDist, neighbor});
                    }
                }
            }

                 int reachable = 0;
                 for (int x : dist) {
                 if (x <= d && x != 0) reachable++; }

            if (reachable <= minCount) {
                minCount = reachable;
                minCity = i;
            }
        }

        return minCity;
    }
};