import java.util.*;

class Solution {
    public int minimumDistance(int[] nums) {
        if (nums == null || nums.length == 0) {
            return -1;
        }

        Map<Integer, Integer> countMap = new HashMap<>();
        int i = 0;
        int n = nums.length;
        int res = Integer.MAX_VALUE;

        for (int j = 0; j < n; j++) {
            int vj = nums[j];
            countMap.put(vj, countMap.getOrDefault(vj, 0) + 1);

            // When any number has appeared at least 3 times in window [i..j]
            while (i < j && countMap.get(vj) >= 3) {
                // Compute subarray [i .. j]
                int mx = Integer.MIN_VALUE;
                int mn = Integer.MAX_VALUE;
                for (int k = i; k <= j; k++) {
                    if(nums[k]==nums[j]){
                    mx = Math.max(mx, k);
                    mn = Math.min(mn, k);
                    }
                }
                int val = 2 * (mx - mn);
                res=Math.min(res,val);

                // shrink window from left
                int vi = nums[i];
                countMap.put(vi, countMap.get(vi) - 1);
                i++;
            }
        }

        return res==Integer.MAX_VALUE?-1:res;
    }
}
