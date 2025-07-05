class Solution {
public:
    bool canMakeEqual(vector<int>& nums, int k) {

        int pls=0;
        vector<int>arr=nums;
        int n=nums.size();
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==-1){
                nums[i]=-1*nums[i];
                nums[i+1]=-1*nums[i+1];
                pls++;
            }
        }

        if(nums[n-1]==-1 || pls>k) pls=INT_MAX;
        int mins=0;

        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==1){
                arr[i]=-1*arr[i];
                arr[i+1]=-1*arr[i+1];
                mins++;
            }
        }
        if(arr[n-1]==1 || mins>k) mins=INT_MAX;

        return min(pls,mins)==INT_MAX?false:true;

        
    }
};