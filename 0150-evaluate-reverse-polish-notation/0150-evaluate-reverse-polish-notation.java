import java.util.Stack;

class Solution {

    int solve(int b, int a, String op) {
        switch (op) {
            case "+": return b + a;
            case "-": return b - a;
            case "*": return b * a;
            case "/": return b / a;
        }
        return 0;
    }

    public int evalRPN(String[] tokens) {
        Stack<Integer> st = new Stack<>();

        for (String token : tokens) {
            if (token.equals("+") || token.equals("-") ||
                token.equals("*") || token.equals("/")) {

                int a = st.pop();
                int b = st.pop();
                st.push(solve(b, a, token));

            } else {
                st.push(Integer.parseInt(token));
                
            }
        }
        return st.peek();
    }
}
