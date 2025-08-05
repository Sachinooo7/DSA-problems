


class Solution {
public:
    bool isMatch(string txt, string pat) {
      
        int i = 0, j = 0;
        int starIdx = -1, match = 0;

        while (i < txt.size()) {
            // Characters match or '?' wildcard
            if (j < pat.size() && (pat[j] == txt[i] || pat[j] == '?')) {
                i++; j++;
            }
            // '*' wildcard
            else if (j < pat.size() && pat[j] == '*') {
                starIdx = j;
                match = i;
                j++;
            }
            // Mismatch but previous '*' exists
            else if (starIdx != -1) {
                j = starIdx + 1;
                match++;
                i = match;
            }
            // No match and no '*'
            else {
                return false;
            }
        }

        // Check for remaining characters in pattern (they must all be '*')
        while (j < pat.size() && pat[j] == '*') {
            j++;
        }

        return j == pat.size();
        
    }
};
