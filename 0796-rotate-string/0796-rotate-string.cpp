class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal)return true;
        if(s.length()!=goal.length())return false;

        string st=s+s;
        return st.contains(goal);
        
    }
};