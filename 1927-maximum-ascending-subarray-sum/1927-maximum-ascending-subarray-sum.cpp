class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=0;
        int mx=0;
        if(nums.size()==1) return nums[0];
       sum=sum+nums[0];
       int i=1;
       mx=nums[0];
        while(i<nums.size()){
            if(nums[i]>nums[i-1]){
                sum+=nums[i];
            }
            else{
                sum=nums[i];
            }

            mx=max(mx,sum);
               i++;
          

        }

        return mx;
    }
};