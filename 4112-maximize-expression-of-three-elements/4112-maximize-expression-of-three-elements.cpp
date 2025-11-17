class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {

        int m1=INT_MIN;
        int m2=INT_MIN;
        int n=INT_MAX;

        for(auto a:nums){
            if(a>m1){
                m2=m1;
                m1=a;
            }
            else if(a>=m2 && a<=m1){
                m2=a;
            }
            
            n=min(n,a);
        
        }

        return m1+m2-n;
        
    }
};