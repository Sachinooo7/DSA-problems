class Solution {
public:
int solve(int i,vector<int>arr,int b,int n,vector<vector<int>>&dp){
    if(i>=n) return  0;
    if(dp[i][b]!=-1) return dp[i][b];

    if(b){
        return dp[i][b]= max(-arr[i]+solve(i+1,arr,0,n,dp),solve(i+1,arr,1,n,dp));
    }
    else{
        return dp[i][b]= max(arr[i]+solve(i+2,arr,1,n,dp),solve(i+1,arr,0,n,dp));
    }
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+2,vector<int>(2,0));

        for(int i=n-1;i>=0;i--){
        for(int b=0;b<=1;b++){

                if(b){
                 dp[i][b]= max(-prices[i]+dp[i+1][0],dp[i+1][1]);
                     }
                else{
                 dp[i][b]= max(prices[i]+dp[i+2][1],dp[i+1][0]);
                     }
        }
        }
        return dp[0][1];
    }
};