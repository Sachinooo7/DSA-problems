class Solution {
public:
    int countOdds(int low, int high) {
int t=(high-low)/2;

        if(low%2==0 && high%2==0)
        return t;
        else
            return t+1;
    
        return 0;
    }
};