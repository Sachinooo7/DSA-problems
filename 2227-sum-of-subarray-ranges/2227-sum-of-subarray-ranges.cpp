class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        
        long long sum=0;
        for(int i=0;i<nums.size();i++){
        int mx=INT_MIN;
        int mn=INT_MAX;
            for(int j=i;j<nums.size();j++){
                mx=max(mx,nums[j]);
                mn=min(mn,nums[j]);
                sum+=mx-mn;
            }
            
        }
        return sum;
    }
};