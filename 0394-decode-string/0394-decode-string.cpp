class Solution {
public:
    string decodeString(string s) {
        stack<string> stk;
        stack<int> freq;
        string num = "";

        for (char a : s) {
            if (a>='0' && a<='9') {
                num+=a;
            }
            else if (a == '[') {
                freq.push(stoi(num));
                num="";
                stk.push("[");
            }
            else if (a == ']') {
                string temp = "";
                while (!stk.empty() && stk.top() != "[") {
                    temp = stk.top() + temp;
                    stk.pop();
                }
                stk.pop(); // Remove '['
                int times = freq.top(); freq.pop();
                string expanded = "";
                for (int i = 0; i < times; i++) expanded += temp;
                stk.push(expanded);
            }
            else {
                stk.push(string(1, a));
            }
        }

        string result = "";
        while (!stk.empty()) {
            result = stk.top() + result;
            stk.pop();
        }
        return result;
    }
};
