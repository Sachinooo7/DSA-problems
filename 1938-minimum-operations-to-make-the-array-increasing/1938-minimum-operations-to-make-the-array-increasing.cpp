class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>=nums[i+1]){
                c+=abs(nums[i+1]-nums[i])+1;
                nums[i+1]=nums[i]+1;
            }
        }
        return c;
    }
};