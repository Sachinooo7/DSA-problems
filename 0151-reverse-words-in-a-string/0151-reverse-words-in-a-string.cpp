class Solution {
public:
    string reverseWords(string s) {
       reverse(s.begin(),s.end());
       int i=0;
       int r=0;
       int l=0;
       while(i<s.size()){
        while(s[i]==' ' && i<s.size())i++;
        if(i==s.size()) break;
         while(s[i]!=' ' && i<s.size()){
            s[r++]=s[i++];
        }
        reverse(s.begin()+l,s.begin()+r);
        s[r++]=' ';
        l=r;
        i++;
       }
       s.resize(r-1);
         
        return s;
    }
};