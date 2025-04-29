class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a=nums[0],c=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==a)
            {
                c++;
            }
            else if(nums[i]!=a && c==0){
                a=nums[i];
            }
            else c--;

        }
        return a;
    }
};