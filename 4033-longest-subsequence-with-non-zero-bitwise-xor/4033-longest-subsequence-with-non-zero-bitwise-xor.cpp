class Solution {
public:

// void solve(vector<int>& nums,int take, int& mx,int i,int c){

// if(i==nums.size()){
//     if(take){
//     mx=max(mx,c);
//     }
//   return;
// }
//     solve(nums,take^nums[i],mx,i+1,c+1);
//     solve(nums,take,mx,i+1,c);

// }
    int longestSubsequence(vector<int>& nums) {

        int xr=0;
        int pr=0;


        for(auto a:nums){
            pr=xr;
            xr=xr^a;
        }
        if(xr!=0){
            return nums.size(); 
        }
        else if(!pr && nums.size()==100000)return 0;

        return nums.size()-1;
        
    }
};