class Solution {
public:

    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        dp[0][0]=1;
        for (int j = 2; j <= m; j++) {
            if (p[j - 1] == '*') {
                dp[0][j] = dp[0][j - 2];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
               
                 if (p[j - 1] == '*') {
                    dp[i][j] = dp[i][j - 2] || (dp[i - 1][j] && 
                    (s[i - 1] == p[j - 2] || p[j - 2] == '.'));
                } else {
                    dp[i][j] = dp[i - 1][j - 1] && 
                    (s[i - 1] == p[j - 1] || p[j - 1] == '.');
                }
                 }  
                 }
        

        return dp[n][m];
    }
};