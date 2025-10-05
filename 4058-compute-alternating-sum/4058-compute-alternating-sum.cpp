class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum=0;
        bool b=1;
        for(auto a:nums){
            if(b){
                sum+=a;
                b=0;
            }
            else{
                sum-=a;
                b=1;
            }
        }
        return sum;
        
    }
};