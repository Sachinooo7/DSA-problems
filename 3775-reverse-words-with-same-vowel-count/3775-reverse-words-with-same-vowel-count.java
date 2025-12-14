class Solution {

   private void solve(StringBuilder sb, int i, int j) {
        while (i < j) {
            char temp = sb.charAt(i);
            sb.setCharAt(i, sb.charAt(j));
            sb.setCharAt(j, temp);
            i++;
            j--;
        }
    }

     private int vowelCount(String s) {
        int count = 0;
        for (char c : s.toCharArray()) {
            if ("aeiouAEIOU".indexOf(c) != -1) count++;
        }
        return count;
    }

    public String reverseWords(String s) {
      StringBuilder sb=new StringBuilder(s);
       int firstSpace = sb.indexOf(" ");
        String firstWord;

        if (firstSpace == -1) {
            // only one word → nothing to modify
            return sb.toString();
        } else {
            firstWord = sb.substring(0, firstSpace);
        }

        int targetVowels = vowelCount(firstWord);

        // --------------------------------------------
        // 2. Process next words and reverse conditionally
        // --------------------------------------------
        int n = sb.length();
        int i = firstSpace + 1;

        while (i < n) {

            // find end of next word
            int j = i;
            while (j < n && sb.charAt(j) != ' ')
                j++;

            // extract current word
            String current = sb.substring(i, j);

            // check vowel count
            if (vowelCount(current) == targetVowels) {
                solve(sb, i, j - 1);
            }

            // move to next word
            i = j + 1;
        }

        return sb.toString();

        
    }
}