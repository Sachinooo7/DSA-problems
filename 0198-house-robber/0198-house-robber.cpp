class Solution {
public:

// int solve(vector<int>& nums,int i , vector<int>& dp){
//     if(i==0)return nums[0];
//     if(i<0) return 0;
//     if(dp[i]!=-1)return dp[i];

//     int take=nums[i]+solve(nums,i-2,dp);
//     int notake=solve(nums,i-1,dp);
//     return dp[i]=max(take,notake);
// }


    int rob(vector<int>& nums) {

        int n=nums.size();
        if(n==1)return nums[0];
        vector<int> dp(n+1 , 0);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
          int take=nums[i]+dp[i-2];
          int notake=dp[i-1];
          dp[i]=max(take,notake);
        }
        // return solve(nums,n-1,dp);
        return dp[n-1];
    }
};