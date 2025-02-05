class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int sum=0;
        if(nums.size()==1){
             return true;
        }
        for(int i=0;i<nums.size()-1;i++){
            int a=nums[i]-nums[i+1];
            if(a%2==0) return false;
        }
        return true;
    }
};