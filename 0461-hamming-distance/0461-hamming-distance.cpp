class Solution {
public:
    int hammingDistance(int x, int y) {
        int n=x^y;
        int c=0;

        while(n){
            if(n%2==1){
                c++;
            }
            n=n/2;
        }
        return c;
        
    }
};