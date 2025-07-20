class Solution {
public:
    bool checkDivisibility(int n) {
        
long s=0;
long p=1;
int t=n;
while(t){

    s+=t%10;
    p*=t%10;
    t=t/10;
}
long x=s+p;
return n%x==0?1:0;

    }
};