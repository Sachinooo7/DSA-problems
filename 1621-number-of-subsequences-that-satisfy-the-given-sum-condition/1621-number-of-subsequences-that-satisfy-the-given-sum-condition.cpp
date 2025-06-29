class Solution {
public:

  int numSubseq(vector<int>& nums, int target) {
        
        int n=nums.size();
        int mod=1e9+7;
        
        sort(nums.begin(),nums.end());
        vector<int>pwr(n,1);
        for(int i=1;i<n;i++){
            pwr[i]=pwr[i-1]*2%mod;
        }

        int left=0; int right=n-1; int res=0;
        while(left<=right){
            if(nums[left]+nums[right]<=target){
                res=(res+pwr[right-left])%mod;
                left++;
            }
            else right--;
        }
        return res;
    }
};