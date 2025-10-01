class Solution {
public:
    int numWaterBottles(int num, int ex) {
        int res=num;

        while((num/ex)>0){
            int x=num/ex;
            res+=x;
            int r=num%ex;
            num=x+r;
        }
       
        return res;
    }
};