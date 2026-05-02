class Solution {
public:

void reverse(vector<int>&nums,int i,int l){
    while(i<l){
        swap(nums[i],nums[l]);i++;l--;
    }
}
    void nextPermutation(vector<int>& nums) {
        
        int ind=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==-1){
            reverse(nums,0,n-1);
            
        }
        else{

            for(int i=n-1;i>ind;i--){
                if(nums[i]>nums[ind]){
                    swap(nums[i],nums[ind]);
                    break;
                }
            }
            reverse(nums,ind+1,n-1);

        }
    }
};