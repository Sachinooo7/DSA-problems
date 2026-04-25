class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>sec(n);
        sec[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            sec[i]=min(sec[i+1],nums[i]);
        }

        int mx=0;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            if(mx-sec[i]<=k){
                return i;
            }
        }
        return ans==INT_MAX?-1:ans;
        
    }
};