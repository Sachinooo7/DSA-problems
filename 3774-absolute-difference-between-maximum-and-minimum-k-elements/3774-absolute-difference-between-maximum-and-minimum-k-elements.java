class Solution {
    public int absDifference(int[] nums, int k) {

        Arrays.sort(nums);
        int sum=0;

        for(int i=0;i<k;i++)
        {
            sum=sum+nums[i];
        }   
        int n=nums.length;
        for(int i=n-k;i<n;i++){
            sum=sum-nums[i];
        }
        int res=Math.abs(sum);
        return res;
        }
}