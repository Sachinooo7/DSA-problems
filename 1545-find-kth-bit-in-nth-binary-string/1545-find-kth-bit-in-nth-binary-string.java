class Solution {
    public char findKthBit(int n, int k) {
        if(n==1)return '0';

        int l=(1<<n)-1;
        int m=(l+1)/2;
        if(m==k)return '1';
        if(k<m)return findKthBit(n-1,k);
        char c=findKthBit(n-1,l-k+1);
        return c=='0'?'1':'0';
    }
}