#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<vector<int>>> dp;

    int solve(vector<string>& strs, int m, int n, int i, unordered_map<int, vector<int>>& map) {
        if (i >= strs.size() || m < 0 || n < 0)
            return 0;

        // invalid state
        if (m < 0 || n < 0) return -1e9; 

        if (dp[i][m][n] != -1)
            return dp[i][m][n];

        // skip current string
        int skip = solve(strs, m, n, i + 1, map);

        // include current string if possible
        int include = 0;
        int zeros = map[i][1];
        int ones = map[i][0];
        if (m >= zeros && n >= ones)
            include = 1 + solve(strs, m - zeros, n - ones, i + 1, map);

        // store best for this subproblem
        return dp[i][m][n] = max(include, skip);
    }

    int findMaxForm(vector<string>& strs, int m, int n) {
        unordered_map<int, vector<int>> map;
        for (int i = 0; i < strs.size(); i++) {
            int one = 0, zero = 0;
            for (auto c : strs[i]) {
                if (c == '1') one++;
                else zero++;
            }
            map[i] = {one, zero};
        }

        dp.assign(strs.size() + 1, vector<vector<int>>(m + 1, vector<int>(n + 1, -1)));
        return solve(strs, m, n, 0, map);
    }
};
