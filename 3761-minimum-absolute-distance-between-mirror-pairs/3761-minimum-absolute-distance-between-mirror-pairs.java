import java.util.HashMap;

class Solution {
    int reverse(int x) {
        int res = 0;
        while (x != 0) {
            res = res * 10 + x % 10;
            x /= 10;
        }
        return res;
    }

    public int minMirrorPairDistance(int[] nums) {
        HashMap<Integer, Integer> lastOcc = new HashMap<>();
        lastOcc.put(reverse(nums[0]), 0);

        int res = Integer.MAX_VALUE;

        for (int j = 1; j < nums.length; j++) {
            if (lastOcc.containsKey(nums[j])) {
                res = Math.min(res, j - lastOcc.get(nums[j]));
            }
            lastOcc.put(reverse(nums[j]), j);
        }

        return (res == Integer.MAX_VALUE) ? -1 : res;
    }
}