// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {
//         int n=coins.size();

//         vector<int>prev(amount+1,1e5),curr(amount+1,1e5);
   
//     prev[0]=0;
      
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=amount;j++){
               
//                 if(coins[i-1]>j){
//                     curr[j]=prev[j];
//                 }
//                 else{
//                      curr[j]=min(prev[j],prev[j-coins[i-1]]+1);

//                 }
//             }
//             prev=curr;
//         }
//         return prev[amount]==1e5?-1:prev[amount];


//     }
// };


class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int> prev(amount + 1, 1e5);  // Large value (infinity)
        
        prev[0] = 0;  // Base case: amount 0 needs 0 coins

        for (int i = 0; i < n; i++) {  // Coins are 0-based indexed
            for (int j = coins[i]; j <= amount; j++) {
                prev[j] = min(prev[j], 1 + prev[j - coins[i]]);
            }
        }

        return prev[amount] == 1e5 ? -1 : prev[amount];
    }
};
