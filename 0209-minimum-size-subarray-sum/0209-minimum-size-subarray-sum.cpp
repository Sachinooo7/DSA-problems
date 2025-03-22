class Solution {
public:
    int minSubArrayLen(int tar, vector<int>& nums) {
        int s=0;
        int l=0;
        int sum=0;
        int mn=INT_MAX;
        int n=nums.size();
        while( l<n){
          sum+=nums[l];
           l++;
        while(sum>=tar){
            mn=min(mn,l-s);
            sum-=nums[s];
            s++;
           }

        }
        return mn==INT_MAX?0:mn;
    }
};