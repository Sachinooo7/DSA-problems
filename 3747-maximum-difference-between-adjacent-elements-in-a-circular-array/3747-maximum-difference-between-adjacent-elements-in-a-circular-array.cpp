class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size()-1;
        int mx=abs(nums[0]-nums[n]);
        for(int i=1;i<=n;i++){
            mx=max(mx,abs(nums[i]-nums[i-1]));
        }
        return mx;
    }
};