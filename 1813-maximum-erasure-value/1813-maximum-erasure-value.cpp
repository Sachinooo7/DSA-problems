class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        int n=nums.size();
        int i=0;
        int j=0;
        int sum=0;
        int mx=0;
        unordered_map<int,int>mapp;

        while(j<n){
            sum+=nums[j];
            mapp[nums[j]]++;
            while(mapp[nums[j]]>1 && i<j){
                sum-=nums[i];
                mapp[nums[i]]--;
                i++;
            }
            mx=max(mx,sum);
            j++;
        }
        return mx;
        
    }
};