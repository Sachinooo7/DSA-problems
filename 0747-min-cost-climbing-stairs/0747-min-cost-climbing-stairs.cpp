class Solution {
public:

int solve(int i,vector<int>cost,vector<int>&dp){
    if(i>=cost.size()){
        return 0;
    }
    if(dp[i]!=-1) return dp[i];

    int one=cost[i]+solve(i+1,cost,dp);
    int two=cost[i]+solve(i+2,cost,dp);

    return dp[i]=min(one,two);
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();

        vector<int>dp(n,-1);
        int mn=solve(0,cost,dp);
        int mx=solve(1,cost,dp);
        return min(mn,mx);
        
    }
};