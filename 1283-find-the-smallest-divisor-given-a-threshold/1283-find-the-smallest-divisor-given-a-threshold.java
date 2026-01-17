class Solution {

    Boolean solve(int m,int[] nums,int k){
        long sum=0;

        for(int a:nums){
            sum+=(a+m-1)/m;
        }

        return sum<=k;
    }
    public int smallestDivisor(int[] nums, int k) {

        int mx=0;
        for(int a:nums){
            mx=Math.max(mx,a);
        }

        int s=1;
        while(s<mx){
            int mid=s+(mx-s)/2;
            if(solve(mid,nums,k)){
                mx=mid;
            }
            else{
                s=mid+1;
            }
        }
        return s;

        
    }
}