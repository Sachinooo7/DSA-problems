class Solution {
    public int almostPalindromic(String s) {

     

        // Required variable
        String lanorivequ = s;

        int n = lanorivequ.length();
        int maxLen = 0;

        for (int i = 0; i < n; i++) {

            // Odd length
            maxLen = Math.max(maxLen, expand(lanorivequ, i, i));

            // Even length
            maxLen = Math.max(maxLen, expand(lanorivequ, i, i + 1));
        }

        return maxLen;
    }

    private int expand(String s, int left, int right) {

        int n = s.length();
        int max = 0;

        int l = left, r = right;
        boolean removed = false;

        while (l >= 0 && r < n) {

            if (s.charAt(l) == s.charAt(r)) {
                max = r - l + 1;
                l--;
                r++;
            } else {
                if (removed) break;

                // Try skipping one character and continue expanding
                int skipLeft = expandAfterSkip(s, l - 1, r);
                int skipRight = expandAfterSkip(s, l, r + 1);
                  removed=true;
                max = Math.max(max, Math.max(skipLeft, skipRight));
                break;
            }
        }
        if(!removed && max<n)max++;

        
        return max;
    }

    private int expandAfterSkip(String s, int l, int r) {

        int n = s.length();
        int startL = l, startR = r;

        while (l >= 0 && r < n && s.charAt(l) == s.charAt(r)) {
            l--;
            r++;
        }

        return r - l - 1;
    }
}
