class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int mx=0;
        for(auto a:nums){
            mx=max(mx,a);
        }
        int i=0;
        int j=0;
        long long c=0;
        int t=0;
        while(j<n){
            if(nums[j]==mx){
                t++;
            }
            while(t==k){
                c+=n-j;
            if(nums[i]==mx) {
                t--;
            }
                i++;
            }
                j++;
            
           
        }
        return c;
    }
};