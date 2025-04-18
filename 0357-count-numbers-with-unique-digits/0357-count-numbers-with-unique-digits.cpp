class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        if(n==1) return 10;
        int a=9;
        int b=9;
        int res=10;
        for(int i=1;i<n;i++){
            a=a*b;
            res+=a;
            b--;
        }
        return res;
    }
};