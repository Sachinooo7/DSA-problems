class Solution {
    public int[] constructTransformedArray(int[] nums) {
        int n=nums.length;
        int []arr=new int[n];

        for(int i=0;i<n;i++){
            int k,ind;
            if(nums[i]>0){
                 k=nums[i]%n;
                 ind=(i+k)%n;
                arr[i]=nums[ind];
            }
            else if(nums[i]<0){
                k=-1*nums[i];
                k=k%n;
                ind=(i-k%n+n)%n;
                arr[i]=nums[ind]; 
            }
            else arr[i]=nums[i];
        }
        return arr;
    }
}