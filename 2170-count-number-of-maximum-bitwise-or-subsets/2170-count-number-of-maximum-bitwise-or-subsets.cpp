class Solution {
public:

void findmx(vector<int>nums,int &mx,int i){
    if(i>=nums.size()) return;

    mx=max(mx,mx|nums[i]);
    findmx(nums,mx,i+1);
    findmx(nums,mx,i+1);
}

void solve(vector<int>nums,int mx,int i,int& c,int m){
    if(i>=nums.size()) {
    if(m==mx){
    c++;
    } 
        return;
        }

    solve(nums,mx,i+1,c,m|nums[i]);
    solve(nums,mx,i+1,c,m);

}

    int countMaxOrSubsets(vector<int>& nums) {
        

    int mx=0;

    findmx(nums,mx,0);
    int c=0;

    solve(nums,mx,0,c,0);



    return c;

    }
};