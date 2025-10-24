class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        if(nums.size()<=2){
            return nums.size();
        }

        int res=0;
        int mx=0;

        for(int i=2;i<nums.size();i++){
            if(nums[i]==(nums[i-1]+nums[i-2])){
                res++;
            }
            else{
                res=0;
            }
            mx=max(mx,res);
        }
        return mx+2;
    }
};