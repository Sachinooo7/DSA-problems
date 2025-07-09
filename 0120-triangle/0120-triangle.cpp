class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {

        int n=tri.size();
        int m=tri[n-1].size();

        vector<vector<int>>dp(n,vector<int>(m,INT_MAX));
        dp[0][0]=tri[0][0];


        for(int i=0;i<n-1;i++){
            for(int j=0;j<=i;j++){
                dp[i+1][j]=min(dp[i+1][j],dp[i][j]+tri[i+1][j]);
                dp[i+1][j+1]=min(dp[i+1][j+1],dp[i][j]+tri[i+1][j+1]);
            }
        }

        int sum=INT_MAX;
        for(int j=0;j<m;j++)
        {
            sum=min(sum,dp[n-1][j]);
        }
        return sum;
    }
};