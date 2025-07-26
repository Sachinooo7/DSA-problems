class Solution {
public:
    // Check if str can be constructed by repeating temp
    bool check(const string& temp, const string& str) {
        int n = temp.size();
        int m = str.size();
        if (m % n != 0) return false;

        for (int i = 0; i < m; i += n) {
            if (str.substr(i, n) != temp)
                return false;
        }
        return true;
    }

    string gcdOfStrings(string str1, string str2) {
        int n = min(str1.size(), str2.size());

        // Try all prefix lengths from n down to 1
        for (int i = n; i >= 1; --i) {
            // Candidate prefix
            string candidate = str1.substr(0, i);

            // It must divide both strings fully
            if (check(candidate, str1) && check(candidate, str2)) {
                return candidate;
            }
        }

        return "";
    }
};
