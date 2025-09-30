class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();

        vector<int>pre(n);
        vector<int>curr(n);

        for(int i=0;i<n;i++){
            pre[i]=nums[i];
        }
        

        for(int i=n-1;i>0;i--){
            for(int j=1;j<=i;j++){
            curr[j-1]= (pre[j]+pre[j-1] )%10;

            }
            pre=curr;
        }
        return pre[0];
        
    }
};