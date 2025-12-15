class Solution {
    public long getDescentPeriods(int[] prices) {
        
        long res=1;

        long x=1;
        for(int i=1;i<prices.length;i++){
            if(prices[i]-prices[i-1]==-1){
                x=x+1;
            }
            else x=1;

                res+=x;

        }
        return res;
        
    }
}