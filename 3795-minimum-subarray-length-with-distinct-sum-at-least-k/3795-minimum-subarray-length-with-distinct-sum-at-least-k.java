class Solution {
    public int minLength(int[] nums, int k) {
        
        Map<Integer,Integer>map=new HashMap<>();

        int i=0;
        int j=0;
       long sum=0;
       int mn=Integer.MAX_VALUE;
        while(j<nums.length){
            map.put(nums[j],map.getOrDefault(nums[j],0)+1);

           if(map.get(nums[j])==1){
            sum+=nums[j];
           }
            while(sum>=k ){
                mn=Math.min(j-i+1,mn);
               if(map.get(nums[i])==1){
                sum-=nums[i];
               }
                map.put(nums[i],map.getOrDefault(nums[i],0)-1);

                i++;
            }

            
            j++;

        }
        return (mn==Integer.MAX_VALUE?-1:mn);
    }
}



