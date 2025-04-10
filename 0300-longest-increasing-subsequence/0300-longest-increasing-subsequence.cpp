class Solution {
public:
int solve(vector<int>& nums,int c,int p,vector<vector<int>>&dp){
    if(c==nums.size()) return 0;
    if(dp[c][p+1]!=-1) return dp[c][p+1];

       int r=solve(nums,c+1,p,dp);
       int l=0;
        if(p==-1 || nums[c]>nums[p]) 
           l=1+solve(nums,c+1,c,dp);
    
    return dp[c][p+1]= max(l,r);
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
       
                return solve(nums,0,-1,dp);
    }
};