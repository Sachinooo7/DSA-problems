class Solution {

    boolean solve(int m, int[] weights, int d) {
        long sum = 0;
        int days = 1;   // start with day 1

        for (int a : weights) {
            if (sum + a > m) {
                days++;
                sum = a;
            } else {
                sum += a;
            }
        }
        return days <= d;
    }

    public int shipWithinDays(int[] weights, int days) {

        int s = 0, l = 0;

        for (int a : weights) {
            l += a;            // max capacity
            s = Math.max(s, a); // min capacity
        }

        while (s < l) {
            int mid = s + (l - s) / 2;

            if (solve(mid, weights, days)) {
                l = mid;
            } else {
                s = mid + 1;
            }
        }
        return s;
    }
}
