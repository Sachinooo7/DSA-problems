class Solution {

    boolean solve(int[] arr, int day, int m, int k) {
        int cnt = 0;

        for (int a : arr) {
            if (a <= day) {
                cnt++;
                if (cnt == k) {
                    m--;
                    cnt = 0;
                }
            } else {
                cnt = 0;
            }
        }
        return m <= 0;
    }

    public int minDays(int[] bloomDay, int m, int k) {
        int n = bloomDay.length;
        if ((long) m * k > n) return -1;

        int mn = Integer.MAX_VALUE, mx = 0;
        for (int a : bloomDay) {
            mn = Math.min(mn, a);
            mx = Math.max(mx, a);
        }

        while (mn < mx) {
            int mid = mn + (mx - mn) / 2;
            if (solve(bloomDay, mid, m, k)) {
                mx = mid;
            } else {
                mn = mid + 1;
            }
        }
        return mn;
    }
}
