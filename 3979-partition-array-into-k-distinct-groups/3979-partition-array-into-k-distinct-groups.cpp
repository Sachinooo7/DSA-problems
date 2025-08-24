class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        if(nums.size()%k!=0) return false;
        unordered_map<int,int>dp;
        
       int x=nums.size()/k;
        for(auto a:nums){
            dp[a]++;
            if(dp[a]>x) return false;
        }
       
return true;
    }
};