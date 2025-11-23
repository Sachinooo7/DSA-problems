class Solution {
public:
    long long sumAndMultiply(int n) {

        long long sum=0;
        long long res=0;
        long long ten=1;

        while(n){

            int a=n%10;
            if(a==0){
             n=n/10;
             continue;
            }
            sum+=a;
            a=a*ten;
            res=a+res;
            ten=ten*10;

            n=n/10;

        }
        return res*sum;
        
    }
};