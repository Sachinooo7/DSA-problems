class Solution {
    public int specialTriplets(int[] nums) {
               final long MOD = 1_000_000_007L;
        Map<Integer, Integer> left = new HashMap<>();
        Map<Integer, Integer> right = new HashMap<>();
        for (int x : nums) right.put(x, right.getOrDefault(x, 0) + 1);

        long res = 0L;
        for (int v : nums) {
            // we're visiting index j with value v
            // remove current from right
            right.put(v, right.get(v) - 1);

            int target = v * 2; // value both i and k must have
            int leftCount = left.getOrDefault(target, 0);
            int rightCount = right.getOrDefault(target, 0);

            if (leftCount > 0 && rightCount > 0) {
                res = (res + (1L * leftCount * rightCount) % MOD) % MOD;
            }

            // add current to left
            left.put(v, left.getOrDefault(v, 0) + 1);
        }

        return (int) res;

    }
}