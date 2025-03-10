class Solution {
public:
    bool canPartition(vector<int>& nums) {
        long sum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2) return false;
        int k=sum/2;

        vector<int>pre(k+1,0),curr(k+1,0);
        pre[0]=1;
        curr[0]=1;
        // pre[nums[0]]=1;

        for(int i=1;i<n;i++){
            for(int j=1;j<=k;j++){
                int take=0;
                int notake=pre[j];
                if(nums[i]<=j) take=pre[j-nums[i]];
                curr[j]=take|notake;
            }
            pre=curr;
        }
        return pre[k];
    }
};