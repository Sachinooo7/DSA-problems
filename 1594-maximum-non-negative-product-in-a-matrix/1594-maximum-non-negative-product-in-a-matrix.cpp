class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid) {
        int mod = 1e9 + 7;
        int r = grid.size();
        int c = grid[0].size();

        vector<vector<pair<long long, long long>>> dp(r, vector<pair<long long, long long>>(c));

        dp[0][0] = {grid[0][0], grid[0][0]};

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {

                if (i == 0 && j == 0) continue;

                long long maxi = LLONG_MIN;
                long long mini = LLONG_MAX;

                if (i > 0) {
                    long long x = dp[i-1][j].first * grid[i][j];
                    long long y = dp[i-1][j].second * grid[i][j];

                    maxi = max({maxi, x, y});
                    mini = min({mini, x, y});
                }

                if (j > 0) {
                    long long x = dp[i][j-1].first * grid[i][j];
                    long long y = dp[i][j-1].second * grid[i][j];

                    maxi = max({maxi, x, y});
                    mini = min({mini, x, y});
                }

                dp[i][j] = {maxi, mini};
            }
        }

        long long ans = dp[r-1][c-1].first;

        if (ans < 0) return -1;
        return ans % mod;
    }
};