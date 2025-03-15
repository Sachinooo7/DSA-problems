class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> wordToChar;
        unordered_map<char, string> charToWord;
        int i = 0, j = 0;
        int n = pattern.size();
        vector<string> words;
        
        // Splitting string `s` into words
        while (j < s.size()) {
            string t;
            while (j < s.size() && s[j] != ' ') {
                t += s[j];
                j++;
            }
            words.push_back(t);
            j++; // Move past the space
        }
        
        // If pattern size and word count do not match, return false
        if (words.size() != n) return false;
        
        for (int k = 0; k < n; k++) {
            char c = pattern[k];
            string word = words[k];
            
            // Checking if word is already mapped
            if (wordToChar.count(word) && wordToChar[word] != c) return false;
            if (charToWord.count(c) && charToWord[c] != word) return false;
            
            // Establish the mapping
            wordToChar[word] = c;
            charToWord[c] = word;
        }
        
        return true;
    }
};
