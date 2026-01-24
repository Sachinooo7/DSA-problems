class Solution {
    public int minPairSum(int[] nums) {
    
        int mx=0;

        Arrays.sort(nums);
        int i=0;
        int j=nums.length-1;

       while(i<j){
        mx=Math.max(mx,nums[i++]+nums[j--]);
       }
        return mx;
    }
}