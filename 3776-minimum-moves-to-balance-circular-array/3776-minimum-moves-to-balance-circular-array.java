class Solution {
    public long minMoves(int[] bal) {

        int n = bal.length;

        // 1. locate the negative index
        int ind = -1;
        for (int i = 0; i < n; i++) {
            if (bal[i] < 0) {
                ind = i;
                break;
            }
        }
        if (ind == -1) return 0;  // no negative, no moves

        long need = -bal[ind];   // how many units we must gather
        long moves = 0;

        // explore outward from ind
        for (int step = 1; step < n && need > 0; step++) {

            int left = (ind - step + n) % n;
            int right = (ind + step) % n;

            // take from left position
            if (bal[left] > 0) {
                long take = Math.min(need, bal[left]);
                need -= take;
                bal[left] -= take;
                moves += take * step;   // cost = units × distance
            }

            if (need == 0) break;

            // take from right position
            if (bal[right] > 0) {
                long take = Math.min(need, bal[right]);
                need -= take;
                bal[right] -= take;
                moves += take * step;   // cost = units × distance
            }
        }

        if (need > 0) return -1;  // not enough positive units

        return moves;
    }
}
