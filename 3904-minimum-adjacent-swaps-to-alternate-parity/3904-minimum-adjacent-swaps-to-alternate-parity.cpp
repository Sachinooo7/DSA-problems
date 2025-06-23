class Solution {
public:

int helper(vector<int>&arr){
    int c=0;
    for(int i=0;i<arr.size();i++){
        c+=abs(arr[i]-2*i);
    }
    return c;
}
    int minSwaps(vector<int>& nums) {
         
         vector<int>even,odd;
         for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                even.push_back(i);
            }
            else{
                odd.push_back(i);
            }
         }

         int n=nums.size();
         int ev=even.size();
         int od=odd.size();
         if(abs(ev-od)>1) return -1;
         int ans=INT_MAX;

         if(ev>=od) ans=min(ans,helper(even)); 
         if(od>=ev) ans=min(ans,helper(odd));
         return ans;
    }
};