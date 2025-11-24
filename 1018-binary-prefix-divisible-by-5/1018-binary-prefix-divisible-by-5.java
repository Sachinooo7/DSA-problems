class Solution {
    public List<Boolean> prefixesDivBy5(int[] nums) {

        List<Boolean>res=new ArrayList<>();
        int v=0;

        for(int n:nums){
            v=((v<<1)+n)%5;
            res.add(v==0);
    }

        return res;
    }
}