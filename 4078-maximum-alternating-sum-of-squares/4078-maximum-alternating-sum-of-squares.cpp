class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {


        for(int i=0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());

        long n=nums.size();

        long t=n/2;
        t+=n%2;

        long long sum=0;
        for(int i=0;i<n;i++){

            if(i<n-t){
                sum-=nums[i]*nums[i];
            }
            else{
                sum+=nums[i]*nums[i];
            }
        }

        return sum;
    }
};