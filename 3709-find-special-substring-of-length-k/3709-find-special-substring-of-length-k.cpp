class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
      if(k==1 && s.size()==1) return true;
      int c=1;
      for(int i=1;i<s.size();i++,c++){
        if(s[i]!=s[i-1] && c==k) return true;
        if(s[i]!=s[i-1]) c=0;
      }
      return c==k;
    }
};