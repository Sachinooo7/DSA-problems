class Solution {
public:

void solve(vector<int>&nums,set<vector<int>>&res,int i){

    if(i>=nums.size()){
        res.insert(nums);
        return;
    }

    for(int j=i;j<nums.size();j++){
        swap(nums[i],nums[j]);
        solve(nums,res,i+1);
        swap(nums[i],nums[j]);
    }

}

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        set<vector<int>>res;

        solve(nums,res,0);

        vector<vector<int>>v;
        for(auto a:res){
            v.push_back(a);
        }

        return v;

        

    }
};