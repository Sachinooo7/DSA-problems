class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char> st;
        for (int i = 0; i < expression.length(); i++) {
            char c = expression[i];

            if (c == ',' || c == ' ') continue;

            if (c == 't' || c == 'f' || c == '!' || c == '|' || c == '&' || c == '(') {
                st.push(c);
            } 
            else if (c == ')') {
                vector<bool> vals;
                while (!st.empty() && st.top() != '(') {
                    vals.push_back(st.top() == 't');
                    st.pop();
                }
                st.pop(); // pop '('
                char op = st.top(); st.pop();

                bool res = vals[0];
                if (op == '&') {
                    for (bool v : vals) res = res && v;
                } else if (op == '|') {
                    for (bool v : vals) res = res || v;
                } else if (op == '!') {
                    res = !res;
                }

                st.push(res ? 't' : 'f');
            }
        }
        return st.top() == 't';
    }
};
