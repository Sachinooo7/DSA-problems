

class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> normal(n); // roads in original direction (u -> v)
        vector<vector<int>> rev(n);    // roads in reverse direction (v -> u)

        // Build both lists
        for (auto &c : connections) {
            normal[c[0]].push_back(c[1]); // u->v (may need reversal)
            rev[c[1]].push_back(c[0]);    // v->u (already valid)
        }

        vector<int> vis(n, 0);
        queue<int> q;
        q.push(0);
        vis[0] = 1;

        int cnt = 0;

        while (!q.empty()) {
            int u = q.front(); q.pop();

            // Roads going outwards (need reversal)
            for (int v : normal[u]) {
                if (!vis[v]) {
                    cnt++;        // must reverse this road
                    vis[v] = 1;
                    q.push(v);
                }
            }

            for (int v : rev[u]) {
                if (!vis[v]) {
                    vis[v] = 1;
                    q.push(v);
                }
            }
        }

        return cnt;
    }
};
