class Solution {
int n,m;
// int [][][]dp=new int[n+1][m+1][3];
    int solve(int [][]coins,int i,int j,int k,int [][][]dp){
        if(i==n-1 && j==m-1){
            if(coins[i][j]<0 && k>0)return 0;
            return coins[i][j];
        }
        if(i>=n || j>=m)return Integer.MIN_VALUE;
        if(dp[i][j][k]!=Integer.MIN_VALUE)return dp[i][j][k];

        int take=coins[i][j]+Math.max(solve(coins,i,j+1,k,dp),solve(coins,i+1,j,k,dp));
        int not=Integer.MIN_VALUE;

        if(coins[i][j]<0 && k>0){

        int notD=solve(coins,i+1,j,k-1,dp);
        int notR=solve(coins,i,j+1,k-1,dp);
        not=Math.max(notD,notR);
        }
        return dp[i][j][k]=Math.max(take,not);
    }
    public int maximumAmount(int[][] coins) {
         n=coins.length;
         m=coins[0].length;
         int [][][]dp=new int[n+1][m+1][3];

         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int k=0;k<3;k++){
                    dp[i][j][k]=Integer.MIN_VALUE;
                }
            }
         }


        return solve(coins,0,0,2,dp);
        
    }
}