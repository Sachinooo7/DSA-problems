class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=1;
        int j=1;

        while(j<nums.size()){
            if(nums[j]!=nums[j-1]){
                nums[i++]=nums[j];
            }
            j++;
        }
        return i;
    }
};