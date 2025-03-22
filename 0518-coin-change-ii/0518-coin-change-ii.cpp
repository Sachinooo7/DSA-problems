class Solution {
public:
// int solve(int amt,vector<int>&coins,int n, vector<vector<int>>&dp){
//     if(n<0||amt<=0){return !amt; 
//     }
//     if(dp[n][amt]!=-1) return dp[n][amt];

//     int l=solve(amt-coins[n],coins,n,dp);
//     int r=solve(amt,coins,n-1,dp);
//     return dp[n][amt]=l+r;
// }
    int change(int amount, vector<int>& coins) {
        // vector<vector<int>>dp(coins.size(),vector<int>(amount+1,0));
       vector<int>prev(amount+1,0),curr(amount+1,0);
        for(int i=0;i<=amount;i++){
            prev[i]=(i%coins[0]==0);
        }
        int n=coins.size();

        for(int i=1;i<n;i++){
            for(int j=0;j<=amount;j++){
                   long l=0;
                   if(j>=coins[i]) l=curr[j-coins[i]];
                   long r=prev[j];
                   curr[j]=l+r;

            }
            prev=curr;
        }
        return prev[amount]; 
    }
};