
class Solution {

    private String reverse(String s) {
        return new StringBuilder(s).reverse().toString();
    }

    private int kmp(String s) {
        String rev = reverse(s);
        String t = s + "#" + rev;

        int n = t.length();
        int[] lps = new int[n];

        for (int i = 1; i < n; i++) {
            int j = lps[i - 1];

            while (j > 0 && t.charAt(i) != t.charAt(j)) {
                j = lps[j - 1];
            }

            if (t.charAt(i) == t.charAt(j)) {
                j++;
            }

            lps[i] = j;
        }
        return lps[n - 1]; // length of longest palindromic prefix
    }

    public String shortestPalindrome(String s) {
        if (s == null || s.length() == 0) return s;

        int len = kmp(s);
        String suffix = s.substring(len);
        return reverse(suffix) + s;
    }
}
