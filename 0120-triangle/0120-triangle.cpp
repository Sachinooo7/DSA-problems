class Solution {
public:


    int minimumTotal(vector<vector<int>>& tri) {
        int r=tri.size();
        int c=tri[r-1].size();
        vector<vector<int>>dp(r,vector<int>(c,-1));

        for(int i=0;i<c;i++){
            dp[r-1][i]=tri[r-1][i];        }

            for(int i=r-2;i>=0;i--){
                for(int j=i;j>=0;j--){
                    int d=tri[i][j]+dp[i+1][j];
                    int dg=tri[i][j]+dp[i+1][j+1];
                    dp[i][j]=min(d,dg);
                }
            }
        return dp[0][0];
    }
};