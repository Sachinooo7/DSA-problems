


class Solution {
    public int residuePrefixes(String s) {
        int[] vis = new int[26];
        int cnt = 0, res = 0;

        for (int i = 0; i < s.length(); i++) {
            int idx = s.charAt(i) - 'a';

            if (vis[idx] == 0) {
                cnt++;
            }

            if (cnt == (i + 1) % 3) {
                res++;
            }

            vis[idx] = 1;
        }
        return res;
    }
}
