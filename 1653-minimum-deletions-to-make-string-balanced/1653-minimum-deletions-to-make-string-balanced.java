class Solution {
    public int minimumDeletions(String s) {
        int n=s.length();

       
        int a=0;
        for(int i=n-1;i>=0;i--){
            if(s.charAt(i)=='a')a++;
        }
         int mn=Integer.MAX_VALUE;
         int b=0;
        for(int i=0;i<n;i++){
            if(s.charAt(i)=='a')a--;
            mn=Math.min(mn,a+b);
            if(s.charAt(i)=='b')b++;
        }
        return mn;
    }
}