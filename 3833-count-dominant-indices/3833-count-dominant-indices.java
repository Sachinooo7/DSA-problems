class Solution {
    public int dominantIndices(int[] nums) {
        int n=nums.length;
        int avg[]=new int[n];
        int c=1;
        int sum=0;
        
        for(int i=n-1;i>=0;i--){
            sum+=nums[i];
            avg[i]=sum/c;
            c++;
            
        }
        int res=0;

        for(int i=0;i<n-1;i++){
            System.out.println(avg[i]);
            if(nums[i]>avg[i+1]){
                res++;
            }
        }
        return res;
        
    }
}