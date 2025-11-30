class Solution {
    public int subarraysDivByK(int[] nums, int k) {

        Map<Integer,Integer>map=new HashMap<>();

        int sum=0;
        map.put(0,1);
        int res=0;

        for(int i:nums){
            sum+=i;

            int r=sum%k;
            if(r<0)r+=k;
                int c=map.getOrDefault(r,0);
                res+=c;

                map.put(r,c+1);
        }
        return res;
        
    }
}