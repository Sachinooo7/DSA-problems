class Solution {
    public boolean consecutiveSetBits(int n) {
        int c=0;
        boolean p=false;
while(n!=0){

    if((1&n)==1){
        c=p==true?c+1:c;
        p=true;
    }
    else p=false;

    if(c>1)return false;
    n=n>>1;

}        
        return c==1?true:false;
    }
}