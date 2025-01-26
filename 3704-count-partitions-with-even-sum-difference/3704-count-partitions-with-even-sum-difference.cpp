class Solution {
public:
    int countPartitions(vector<int>& nums) {
         int n = nums.size();
        int count = 0;
        int totalSum = 0;
        int leftSum = 0;

        for (int num : nums) {
            totalSum += num;
        }

        for (int i = 0; i < n - 1; i++) {
            leftSum += nums[i];
            if ((leftSum % 2) == ((totalSum-leftSum) % 2)) {
                count++;
            }
        }

        return count;
    }
};