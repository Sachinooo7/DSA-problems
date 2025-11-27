class Solution {
    public long maxSubarraySum(int[] nums, int k) {
         long [] pre=new long[k];
        long m=Long.MAX_VALUE;

        for(int i=0;i<k;i++){
            pre[i]=m;
        }

        long ans=Long.MIN_VALUE;

        pre[0]=0;
        long prefix=0;

        for(int i=0;i<nums.length;i++){
            prefix+=nums[i];
            int mod=(i+1) %k;

            if(pre[mod]!=m){
                ans=Math.max(ans,prefix-pre[mod]);
            }

            pre[mod]=Math.min(pre[mod],prefix);
            
        }
        return ans;
    }
}