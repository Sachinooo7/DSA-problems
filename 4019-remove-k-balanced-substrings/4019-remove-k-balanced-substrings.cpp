class Solution {
public:
    bool check(int i, int len, string &s) {
        int j = i + len - 1;
        if (j >= s.size()) return false; // prevent out of bounds
        while (i < j) {
            if (s[i] != '(' || s[j] != ')') return false;
            i++;
            j--;
        }
        return true;
    }

    string removeSubstring(string s, int k) {
        int i = 0;
        while (i <= (int)s.size() - 2*k) {
            if (check(i, 2*k, s)) {
                s.erase(i, 2*k);
                i = max(i - k-1, 0); // step back one to recheck overlaps
            } else {
                i++;
            }
        }
        return s;
    }
};
