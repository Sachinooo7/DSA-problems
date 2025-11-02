class Solution {
    public long maxProduct(int[] nums) {

        long  mA=0;
        long mB=0;

        

        for(int a:nums){
            a=Math.abs(a);

            if(a>=mA){
                mB=mA;
                mA=a;
            }
            else if(a>mB){
                mB=a;
            }
        }
        return mA*mB*100000;
        
    }
}