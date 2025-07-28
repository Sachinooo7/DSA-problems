class Solution {
public:

int mxx=0;

void solve(vector<int>nums,int i,int& c,int m){
    if(i>=nums.size()) {
    if(m==mxx){
    c++;
    } 
    else if(m>mxx){
        mxx=m;
        c=1;
    }
        return;
        }

    solve(nums,i+1,c,m|nums[i]);
    solve(nums,i+1,c,m);

}

    int countMaxOrSubsets(vector<int>& nums) {
        


    // findmx(nums,mx,0);
    int c=0;
    solve(nums,0,c,0);
    return c;

    }
};