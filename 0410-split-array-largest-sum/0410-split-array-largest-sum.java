class Solution {

    private boolean canSplit(int[] nums, int k, int maxSum) {
        int parts = 1;
        int curr = 0;

        for (int n : nums) {
            if (curr + n > maxSum) {
                parts++;
                curr = n;
                if (parts > k) return false;
            } else {
                curr += n;
            }
        }
        return true;
    }

    public int splitArray(int[] nums, int k) {

        int low = 0, high = 0;
        for (int n : nums) {
            low = Math.max(low, n);
            high += n;
        }

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canSplit(nums, k, mid))
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
}
