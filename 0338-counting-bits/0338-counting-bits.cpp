class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>dp(n+1,0);
        int s=1;
        for(int i=1;i<=n;i++){
            if(s*2==i){
                s=i;
            }
            dp[i]=dp[i-s]+1;
        }
        return dp;
    }
};