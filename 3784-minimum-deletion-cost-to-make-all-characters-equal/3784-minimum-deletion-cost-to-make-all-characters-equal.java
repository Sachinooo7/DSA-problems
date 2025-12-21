class Solution {
    public long minCost(String s, int[] cost) {
        Map<Character,Long>map=new HashMap<>();

        long sum=0;

        for(int i=0;i<s.length();i++){
            map.put(s.charAt(i),map.getOrDefault(s.charAt(i),0L)+cost[i]);
            sum+=cost[i];
        }

        long mn=Long.MAX_VALUE;
        
        for(long val:map.values()){
            mn=Math.min(mn,sum-val);
        }
        return mn;

    }
}