class Solution {
    public int minRemoval(int[] nums, int k) {

        int n=nums.length;
        if(n==1)return 0;

        Arrays.sort(nums);

        int st=0;
        int l=0;
        int r=0;
        int mx=0;
        while(r<n){

            if((long) nums[l]*k>=nums[r]){
                mx=Math.max(mx,r-l+1);
                r++;
            }
            else{
                l++;
            }
        }

        st=n-mx;
        return st;
    }
}