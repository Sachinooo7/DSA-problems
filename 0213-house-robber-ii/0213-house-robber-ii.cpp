class Solution {
public:
int solve(vector<int>& nums,int s,int e){
    int pr=0;
        int pr2=0;
        int n=nums.size();
        for(int i=s;i<e;i++){
            int left=nums[i]+pr2;
            int right=pr;
            int curr=max(left,right);
            pr2=pr;
            pr=curr;
        }
        return pr;
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1) return nums[0];
        int ans=max(solve(nums,0,n-1),solve(nums,1,n));
        return ans;
    }
};