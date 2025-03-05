class Solution {
public:

    long long coloredCells(int n) {
   long long s=1;
   if(n==1) return n;
    for(int i=1;i<n;i++){
        s=s+4*i;
    }
    return s;
    }
};