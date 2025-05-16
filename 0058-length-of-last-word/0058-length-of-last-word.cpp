class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int i=s.length();
        i=i-1;
        while(s[i]==' ') i--;
        int c=0;
        while( i>=0 && s[i]!=' '){
            i--;
            c++;
        }
        return c;
    }
};