class Solution {
public:
    int maxSum(vector<int>& nums) {

        unordered_map<int,int>mapp;

        int sum=0;
        int mx=INT_MIN;
        for(auto a:nums){
            if(mapp[a]!=1 && a>0){
                sum+=a;
                mapp[a]=1;
            }
                mx=max(mx,a);
        }
        return sum==0?mx:sum;
    }
};