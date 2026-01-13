class Solution {
    public String longestPrefix(String s) {
        int n = s.length();
        int[] dp = new int[n];

        int i = 0, j = 1;

        while (j < n) {
            if (s.charAt(i) == s.charAt(j)) {
                i++;
                dp[j] = i;
                j++;
            } else {
                if (i != 0) {
                    i = dp[i - 1];   // key fix
                } else {
                    dp[j] = 0;
                    j++;
                }
            }
        }

        return s.substring(0, dp[n - 1]);
    }
}
