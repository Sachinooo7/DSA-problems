class Solution {
public:
int solve(int i,int j,vector<int>& nums,vector<vector<int>>&dp){
    if(i>j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
int mx=INT_MIN;
for(int k=i;k<=j;k++){
    int cost=nums[i-1]*nums[k]*nums[j+1] +solve(i,k-1,nums,dp)+solve(k+1,j,nums,dp);
    mx=max(mx,cost);
}
    return dp[i][j]=mx;
}
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        nums.push_back(1);
        nums.insert(nums.begin(),1);
        vector<vector<int>>dp(n+2,vector<int>(n+2,0));
        for(int i=n;i>=1;i--){
            for(int j=1;j<=n;j++){
                if(i>j) continue;
                int mx=INT_MIN;
               for(int k=i;k<=j;k++){
                  int cost=nums[i-1]*nums[k]*nums[j+1]
                   +dp[i][k-1]+dp[k+1][j];
                       mx=max(mx,cost);
                        }
                     dp[i][j]=mx;
            }
        }


        return dp[1][n];
    }
};