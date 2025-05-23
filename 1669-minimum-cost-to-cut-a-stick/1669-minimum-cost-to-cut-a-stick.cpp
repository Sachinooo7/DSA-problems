class Solution {
public:
// int solve(int i,int j,vector<int>& cuts,vector<vector<int>>dp){
//     if(i>j) return 0;
//     if(dp[i][j]!=-1) return dp[i][j];
// int mn=INT_MAX;
//     for(int in=i;in<=j;in++){
//         int cost=cuts[j+1]-cuts[i-1]+solve(i,in-1,cuts,dp)+solve(in+1,j,cuts,dp);
//         mn=min(mn,cost);
//     }
//     return dp[i][j]=mn;
// }
    int minCost(int n, vector<int>& cuts) {
        
        int c=cuts.size();
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
        vector<vector<int>>dp(c+2,vector<int>(c+2,0));

        for(int i=c;i>=1;i--){
            for(int j=1;j<=c;j++){
                    if(i>j) continue;
                int mn=INT_MAX;
                for(int in=i;in<=j;in++){
                   int cost=cuts[j+1]-cuts[i-1]+dp[i][in-1]+dp[in+1][j];
                    mn=min(mn,cost);
                     }
                 dp[i][j]=mn;
            }
        }
        return dp[1][c];

    }
};