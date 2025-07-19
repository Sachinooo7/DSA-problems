class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        
    
        vector<vector<int>>dp(k,vector<int>(k,0));
        int mx=0;

        for(auto a:nums){
            int v=a%k;
            for(int j=0;j<k;j++){
                dp[j][v]= dp[v][j]+1;
                mx=max(mx,dp[j][v]);
            }
        }
        return mx;
    }
};