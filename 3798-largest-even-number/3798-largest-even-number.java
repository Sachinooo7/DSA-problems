class Solution {
    public String largestEven(String s) {

        int idx = -1;

        // find the rightmost even digit
        for (int i = s.length() - 1; i >= 0; i--) {
            if ((s.charAt(i) - '0') % 2 == 0) {
                idx = i;
                break;
            }
        }

        // if no even digit found
        if (idx == -1) return "";

        // return substring till that index
        return s.substring(0, idx + 1);
    }
}
