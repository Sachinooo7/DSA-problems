class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mx=-1;
        int n=prices.size();
        int val=prices[n-1];
        for(int i=n-1;i>=0;i--){
            int ans=-1;
            if(prices[i]>val){
                val=prices[i];
            }
                ans=val-prices[i];
            mx=max(mx,ans);
        }
        if(mx<0) return 0;
        return mx;
    }
};