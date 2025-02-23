class Solution {
public:
    bool hasSameDigits(string s) {
        string str;
        while(s.size()>2){
            string temp;
            for(int i=1;i<s.size();i++){
                temp+=(s[i-1]+s[i])%10;
            }
            s=temp;
        }
if(s[0]==s[1]) return true;
        return false;
    }
};