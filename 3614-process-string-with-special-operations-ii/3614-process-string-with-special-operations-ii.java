class Solution {
    public char processStr(String s, long k) {

        long len=0;
        int n=s.length();

        for(char ch:s.toCharArray()){
            if(ch=='*')len=len==0?0:len-1;
            else if(ch=='#')len=len*2;
            else if(ch>='a'&&ch<='z')len++;
        }

        if(len<=k)return '.';

        for(int i=n-1;i>=0;i--){
            switch(s.charAt(i)){
                case'*':
                len++;
                break;
                case'#':
                if(k>=len/2)
                k-=len/2;
                len=len/2;
                break;
                case'%':
                k=len-1-k;
                break;
                default:
                if(len==k+1)
                return s.charAt(i);
                len--;
                
            }
        }   
        return '.';
    }
}