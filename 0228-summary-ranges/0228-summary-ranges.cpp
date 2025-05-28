class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>v;
        int j=0;
        nums.push_back(-101);
        for(int i=1;i<nums.size();i++){
            if(nums[i]-1!=nums[i-1]){
                if(nums[j]==nums[i-1]) v.push_back(to_string(nums[j]));
                else
                v.push_back(to_string(nums[j]) + "->" + to_string(nums[i - 1]));
                j=i;
            }
        }
        return v;
    }
};