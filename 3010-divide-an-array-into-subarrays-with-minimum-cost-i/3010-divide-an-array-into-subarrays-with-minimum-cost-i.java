class Solution {
    public int minimumCost(int[] nums) {

        int fir=Integer.MAX_VALUE;
        int sec=fir;

        for(int i=1;i<nums.length;i++){
            if(nums[i]<fir){
                sec=fir;
                fir=nums[i];
            }
            else if(nums[i]<sec){
                sec=nums[i];
            }
        }
        int ans=nums[0]+fir+sec;
        return ans; 
        
    }
}