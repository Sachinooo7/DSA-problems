class Solution {
public:
    int climbStairs(int n) {
        int pr=1;
        int pr2=2;
        if(n<=2) return n;
        int sum=0;
        for(int i=2;i<n;i++){
            sum=pr+pr2;
            pr=pr2;
            pr2=sum;
        }
        return sum;
    }
};