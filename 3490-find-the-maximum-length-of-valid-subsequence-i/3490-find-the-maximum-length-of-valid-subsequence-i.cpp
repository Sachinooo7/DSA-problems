class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int prev = nums[0];
        int odds = (nums[0]%2==1)?1:0;
        int evens=(nums[0]%2==0)?1:0;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(prev%2 == !(nums[i]%2)){
                count++;
            }
            if(nums[i]%2==0) evens++;
            else odds++;
            prev = nums[i];
        }
        return max(count,max(evens,odds));
    }
};