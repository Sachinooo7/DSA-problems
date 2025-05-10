class Solution {
public:
// void solve(vector<int>&nums,vector<int>&stp,int i,int c){
//     if(i>=nums.size()-1) {
//      stp[nums.size()-1]=min(c,stp[nums.size()-1]);
//         return;
//     }
//     if(c>=stp[i]) return;
//     stp[i]=c;

//     for(int j=1;j<=nums[i];j++){
//         solve(nums,stp,i+j,c+1);
//     }
// }

    int jump(vector<int>& nums) {
       int n=nums.size();

       int end=0; int f=0; int j=0;
       for(int i=0;i<n-1;i++){
        f=max(f,nums[i]+i);
        if(i==end){
            j++;
            end=f;
        }
       } 
       return j;
    }
};

