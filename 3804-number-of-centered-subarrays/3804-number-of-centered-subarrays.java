class Solution {
    public int centeredSubarrays(int[] nums) {

        int n=nums.length;
        int []pre=new int[n+1];

        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+nums[i];
        }

int res=0;
        for(int i=0;i<n;i++){
        HashSet<Integer>set=new HashSet<>();

        for(int j=i;j<n;j++){
            set.add(nums[j]);
            int sum=pre[j+1]-pre[i];
            if(set.contains(sum)){
                res++;
            }
        }

        }
        return res;
        
    }
}