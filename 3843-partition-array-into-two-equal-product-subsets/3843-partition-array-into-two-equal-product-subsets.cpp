class Solution {
public:
bool solve(vector<int>& nums, long long target,int i,long long mull){
    if(mull>target || i>=nums.size()) return false;
    if(mull==target) return true;
     if(solve(nums,target,i+1,mull*nums[i])) return true;
     if(solve(nums,target,i+1,mull)) return true;
    
    return false;
}
 bool checkEqualPartitions(vector<int>& nums, long long target) {
        
        __int128  mul=1;
        for(auto a:nums) {
            if(target%a!=0)return false;
            mul*=a;
            if ((__int128)target * target < mul) return false;
        }
        if(mul/target!=target) return false;
        return solve(nums,target,0,1);

    }
};