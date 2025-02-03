class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        

        int mx=1;
               int d=1;
               int a=1;
               
        for(int i=0;i<nums.size()-1;i++){
                if(nums[i]>nums[i+1]){
                    d++;
                    a=1;
                }      
                      
                if(nums[i]<nums[i+1]){
                a++;
                d=1;
                } 
                
                if(nums[i]==nums[i+1]) {
                    d=1;
                    a=1;
                }
                mx=max(mx,max(d,a));
        }
        return mx;
    }
};