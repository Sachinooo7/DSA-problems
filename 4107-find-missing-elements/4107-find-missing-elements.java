class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        HashSet<Integer>hash=new HashSet<>();
        int mn=Integer.MAX_VALUE;
        int mx=Integer.MIN_VALUE;

        for(int a:nums){
            hash.add(a);
            mn=Math.min(mn,a);
            mx=Math.max(mx,a);
        }

        List<Integer>res=new ArrayList<>();
        for(int i=mn+1;i<mx;i++){
            if(!hash.contains(i)){
                res.add(i);
            }
        }
        return res;
    }
}