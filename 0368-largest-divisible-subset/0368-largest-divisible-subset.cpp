class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1),h(n);
        int mx=1;
        int ind=0;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            h[i]=i;
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0 && dp[i]<dp[j]+1){
                    dp[i]=dp[j]+1;
                    h[i]=j;
                }
            }
            if(mx<dp[i]){
                mx=dp[i];
                ind=i;
            }

        }

        vector<int>ans;
        ans.push_back(nums[ind]);
        while(h[ind]!=ind){
                ind=h[ind];
                ans.push_back(nums[ind]);
        }
        return ans;
    }
};