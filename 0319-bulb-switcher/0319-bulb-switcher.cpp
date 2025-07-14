class Solution {
public:
    int bulbSwitch(int n) {
        int i=0;
        int x=3;
        int c=0;
        while(i<n){
            i=i+x;
            x+=2;
            c++;
        }

        return c;
    }
};