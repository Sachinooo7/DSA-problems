class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        
        int mx=INT_MAX;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                mx=nums[i] & mx;
            }
        }
        return mx==INT_MAX?0:mx;
    }
};