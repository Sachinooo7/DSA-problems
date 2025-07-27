class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        int fir=INT_MAX;
        int sec=INT_MAX;

        for(auto a:nums){
            if(a<=fir) fir=a;
            else if(a<=sec) sec=a;
            else return true;
        }
        return false;
    }
};