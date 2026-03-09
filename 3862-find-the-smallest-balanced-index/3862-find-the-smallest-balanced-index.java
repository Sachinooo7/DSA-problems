class Solution {
    public int smallestBalancedIndex(int[] nums) {

        long sum=0;
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
        }
        long mul=1;
        int ind=-1;
        for(int i=nums.length-1;i>=0;i--){
            if(sum-nums[i]==mul){
                ind=i;
            }
            else if(mul>sum)return ind;
            sum-=nums[i];
            mul=mul*nums[i];

        }
        return ind;
        
    }
}

