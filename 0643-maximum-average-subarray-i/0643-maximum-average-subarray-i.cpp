class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double mx=0;

        for(int i=0;i<k;i++){
            mx+=nums[i];
        }
        double sum=mx;
        mx=mx/k;

        int s=0;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[s];
            mx=max(mx,sum/k);
            s++;
        }
        return mx;
        
    }
};