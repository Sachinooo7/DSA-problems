class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.size() <= k) return "0";

        string s;  // use as stack

        for (char a : num) {
            while (!s.empty() && s.back() > a && k > 0) {
                s.pop_back();
                k--;
            }
            s.push_back(a);
        }

        // Remove remaining digits if k still > 0
        while (!s.empty() && k > 0) {
            s.pop_back();
            k--;
        }

        // Remove leading zeros
        int i = 0;
        while (i < s.size() && s[i] == '0') i++;
        string res = s.substr(i);

        return res.empty() ? "0" : res;
    }
};
