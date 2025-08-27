class Solution {
public:
    int minAddToMakeValid(string s) {

        stack<char>stk;

        for(auto a:s){
            if(stk.empty() || a=='('){
                stk.push(a);
            }
            else if(stk.top()==')'){
                stk.push(a);
            }
            else stk.pop();
        }
        return stk.size();

        
    }
};