class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x=0; int y=0;
        while(x<s.size()&& y<t.size()){
            if(s[x]==t[y]){
                x++;
            }
            y++;
        }
        if(x==s.size()) return true;
        return false;
    }
};