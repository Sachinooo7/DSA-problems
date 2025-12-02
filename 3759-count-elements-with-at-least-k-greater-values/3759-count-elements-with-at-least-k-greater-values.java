
import java.util.*;

class Solution {
    public int countElements(int[] nums, int k) {
        int n = nums.length;
        if (k == 0) return n;   // all elements qualify

        // Count frequencies
        Map<Integer, Integer> freq = new HashMap<>();
        for (int x : nums) {
            freq.put(x, freq.getOrDefault(x, 0) + 1);
        }

        // Sort distinct values in descending order
        List<Integer> vals = new ArrayList<>(freq.keySet());
        Collections.sort(vals, Collections.reverseOrder());

        int res = 0;
        int greater = 0;  // number of elements strictly greater than current value

        for (int v : vals) {
            int f = freq.get(v);   // frequency of v

            if (greater >= k) {
                res += f;         // all f elements of this value are qualified
            }

            greater += f;         // these elements are now "greater" for smaller ones
        }

        return res;
    }
}
