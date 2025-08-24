class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        unordered_map<int,int>dp;

        int dup=0;
        for(auto a:nums){
            dp[a]++;
        }
        if(nums.size()%k!=0) return false;
int x=nums.size()/k;
        for(auto a:dp){
            if(a.second>x) return false;
        }


return true;
    }
};