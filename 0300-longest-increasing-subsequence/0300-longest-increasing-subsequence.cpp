class Solution {
public:
// int solve(vector<int>& nums,int c,int p,vector<vector<int>>&dp){
//     if(c==nums.size()) return 0;
//     if(dp[c][p+1]!=-1) return dp[c][p+1];

//        int r=solve(nums,c+1,p,dp);
//        int l=0;
//         if(p==-1 || nums[c]>nums[p]) 
//            l=1+solve(nums,c+1,c,dp);
    
//     return dp[c][p+1]= max(l,r);
// }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int mx=1;
        // vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        vector<int>prev(n,1);
        for(int c=1;c<n;c++){
            for(int p=c;p>=0;p--){
                if(nums[c]>nums[p]) 
                  prev[c]=max(prev[c],1+prev[p]);
                  mx=max(mx,prev[c]);
            }
        }
                return mx;
    }
};