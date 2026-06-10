class Solution {
public:
    long long maxTotal(vector<int>& nums, string s) {
        long long sum = 0;
        int curr = 0;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];

            if (s[i] == '0') {
                curr = num;
            } 
            else if (curr < num) {
                sum += num;
            } 
            else {
                sum += curr;
                curr = num;
            }
        }

        return sum;
    }
};