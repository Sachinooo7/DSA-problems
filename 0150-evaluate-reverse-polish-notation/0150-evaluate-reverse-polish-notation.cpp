class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;

        for(auto a:tokens){
            if(a=="+"||a=="-"||a=="*"||a=="/"){
                int x,y;
                y=s.top(); s.pop();
                x=s.top(); s.pop();
                if(a=="+") s.push(x+y);
                else if(a=="-") s.push(x-y);
                else if(a=="*") s.push(x*y);
                else if(a=="/") s.push(x/y);
            }
            else s.push(stoi(a));
        }
        return s.top();
        
    }
};