class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int>arr;
        int x=n;
        int i=0;
        while(i<n && x<2*n){
            arr.push_back(nums[i]); i++;
            arr.push_back(nums[x]); x++;
        }
        return arr;
        
    }
};