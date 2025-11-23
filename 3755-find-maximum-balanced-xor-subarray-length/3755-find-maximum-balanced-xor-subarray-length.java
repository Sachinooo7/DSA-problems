class Solution {
    public int maxBalancedSubarray(int[] nums) {


         Map<String,Integer>hash=new HashMap<>();
         int n=nums.length;
         hash.put("0#0",-1);
         int odd=0;
         int xr=0;
         int even=0;
         int res=0;

         for(int i=0;i<n;i++){
            xr=xr^nums[i];

            if(nums[i]%2==0){
                even++;
            }
            else odd++;

            int df=odd-even;

            String st=xr+"#"+df;
            
            if(hash.containsKey(st)){
                res=Math.max(res,i-hash.get(st));
            }
            else{
                hash.put(st,i);
            }
         }
         return res;

    }
}