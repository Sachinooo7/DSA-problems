class Solution {
public:
    int bnsrch(vector<int>& dp, int v) {
        int s = 0;
        int l = dp.size() - 1;
        int res = -1;
        while (s <= l) {
            int mid = s + (l - s) / 2;
            if (dp[mid] < v) {
                res = mid;
                s = mid + 1;
            } else {
                l = mid - 1;
            }
        }
        return res + 1;
    }

    int maxEnvelopes(vector<vector<int>>& env) {
        sort(env.begin(), env.end(), [](const vector<int>& a, const vector<int>& b) {
            if (a[0] == b[0]) return a[1] > b[1];  // descending height if same width
            return a[0] < b[0];  // ascending width
        });

        vector<int> dp;

        for (int i = 0; i < env.size(); i++) {
            int ind = bnsrch(dp, env[i][1]);
            if (ind == dp.size()) {
                dp.push_back(env[i][1]);
            } else {
                dp[ind] = env[i][1];
            }
        }

        return dp.size();
    }
};
