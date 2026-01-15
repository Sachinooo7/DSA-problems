class Solution {

    boolean calc(int []piles,int h,long m){
        long res=0;

        for(long a:piles){
            res+=(a+m-1)/m;
        }
        return (res<=h?true:false);
    }
    public int minEatingSpeed(int[] piles, int h) {

        long mx=0;
        for(int i=0;i<piles.length;i++){
            mx=Math.max(mx,piles[i]);
        }
        long s=1;
        long f=mx;

        while(s<f){
            long mid=s+(f-s)/2;

            if(calc(piles,h,mid)==true){
                f=mid;
            }
            else{
                s=mid+1;
            }
        }
        return (int)s;
    }
}