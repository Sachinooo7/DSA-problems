class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum=0;
        int sn=n*(n+1)/2;
        for(int i=1;i<=n;i++){
            if(i%m) sum+=i;
        }
        return sum-(sn-sum);
    }
};