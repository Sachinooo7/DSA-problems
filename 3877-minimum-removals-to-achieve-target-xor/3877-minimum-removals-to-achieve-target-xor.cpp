class Solution {
public:
    int dp[41][100000];
    int solve(int i, int temp, int& target, vector<int>& nums) {
        if(i>=nums.size()) {
            if(temp==target) return 0;
            return 42;
        }
        if(dp[i][temp]!=-1) return dp[i][temp];
        
        int take=solve(i+1, temp^nums[i], target, nums);
        int skip=1+solve(i+1, temp, target, nums);
        return dp[i][temp]=min(take, skip);
    }
    
    int minRemovals(vector<int>& nums, int target) {
        memset(dp, -1, sizeof(dp));
        int ans=solve(0, 0, target, nums);

        if(ans>nums.size()) return -1;
        return ans;
    }
};