class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long mx=0;

        long long mn=INT_MAX;

        for(auto a:nums){
            mx=max(mx,(long long)a);
            mn=min(mn,(long long) a);
        }
        return (mx-mn)*k;
    }
};