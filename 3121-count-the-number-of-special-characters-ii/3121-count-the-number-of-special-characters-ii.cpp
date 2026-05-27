class Solution {
public:
    int numberOfSpecialChars(string word) {
        array<int, 26> lower{}, upper{};
        for (size_t i = 0; i < 26; ++i) {
            lower[i] = -1; upper[i] = -1;
        }
        for (size_t i = 0; i < word.size(); ++i) {
            if (islower(word[i])) lower[word[i] - 'a'] = i;
            else if (upper[word[i] - 'A'] == -1) upper[word[i] - 'A'] = i;
        }
        int output = 0;
        for (size_t i = 0; i < 26; ++i) {
            if (lower[i] != -1 && upper[i] != -1 && lower[i] < upper[i]) ++output;
        }
        return output;
    }
};