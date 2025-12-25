class Solution {
    public long maximumHappinessSum(int[] happiness, int k) {
        
        Arrays.sort(happiness);
        int n=happiness.length;

        long sum=0;
        int x=0;
        for(int i=n-1;i>=n-k;i--){
            sum=sum+(happiness[i]-x>0?happiness[i]-x:0);
            x++;
        }
        return sum;
    }
}