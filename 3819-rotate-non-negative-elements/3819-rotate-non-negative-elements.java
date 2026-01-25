


class Solution {

    public int[] rotateElements(int[] nums, int k) {

        int n = nums.length;

        // Step 1: Collect positive numbers
        ArrayList<Integer> pos = new ArrayList<>();
        for (int x : nums) {
            if (x >= 0) {
                pos.add(x);
            }
        }

        int p = pos.size();
        if (p == 0) return nums;

        k = k % p;   // handle large k

        // Step 2: Right rotate positives
        int[] rotated = new int[p];
        for (int i = 0; i < p; i++) {
            int newIndex = (i - k + p) % p;
            rotated[newIndex] = pos.get(i);
        }

        // Step 3: Put them back into original positions
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) {
                nums[i] = rotated[j++];
            }
        }

        return nums;
    }
}





