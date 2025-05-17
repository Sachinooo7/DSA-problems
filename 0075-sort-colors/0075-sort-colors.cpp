class Solution {
public:
    void sortColors(vector<int>& nums) {
         int f=0; int m=0; int l=nums.size()-1;

         while(f<=l){
            if(nums[f]==0) {
                swap(nums[f],nums[m]);
            f++; m++;
            }
            else if(nums[f]==1){
                f++;
            }
            else{
                swap(nums[l],nums[f]);
                l--;
            }
         }
    }
};