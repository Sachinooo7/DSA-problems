class Solution {
public:
    // int solve(int i, int k, vector<int>& arr, vector<int>& dp) {
    //     int n = arr.size();
    //     if (i == n) return 0;
    //     if (dp[i] != -1) return dp[i];

    //     int maxNum = 0, maxSum = 0;

    //     for (int j = i; j < i + k && j < n; j++) {
    //         maxNum = max(maxNum, arr[j]);
    //         int sum = maxNum * (j - i + 1) + solve(j + 1, k, arr, dp);
    //         maxSum = max(maxSum, sum);
    //     }

    //     return dp[i] = maxSum;
    // }

    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n+1, 0);
        for(int i=n-1;i>=0;i--){
             int maxNum = 0, maxSum = 0;

        for (int j = i; j < i + k && j < n; j++) {
            maxNum = max(maxNum, arr[j]);
            int sum = maxNum * (j - i + 1) + dp[j + 1];
            maxSum = max(maxSum, sum);
        }

        dp[i] = maxSum;

        }
        // return solve(0, k, arr, dp);
        return dp[0];
    }
};
