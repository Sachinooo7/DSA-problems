class Solution {
public:
    int pivotIndex(vector<int>& nums) {
int n=nums.size();
        vector<int>dp(n);
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            dp[i]=nums[i]+dp[i-1];
        }
        int sum=dp[n-1];
         if(sum-dp[0]==0) return 0;
        for(int i=1;i<nums.size();i++){
            if(sum-dp[i]==dp[i-1]) return i;
        }
        return -1;
    }
};