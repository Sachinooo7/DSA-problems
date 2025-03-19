class Solution {
public:
// void solve(vector<int>& nums,int i,bool &b,int n){
//     if(i==n) {
//         b=1;return;
//     }
//     for(int x=nums[i];x>=0;x--){
//         solve(nums,i+x,b,n);
//     }
// }
    bool canJump(vector<int>& nums) {
        // bool b=0;
        int n=nums.size();
        // solve(nums,0,b,n-1);
        // return b;

        int mx=0;
        for(int i=0;i<n;i++){
            if(i>mx) return false;
            mx=max(mx,i+nums[i]);
        }
        return true;
    }
};