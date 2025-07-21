class Solution {
public:
    string makeFancyString(string s) {
        int c=0;
        for(int i=s.size()-1;i>0;i--){
            if(s[i]==s[i-1]) c++;
            else c=0;
            if(c==2){
                s.erase(i,1);
                c=1;
            }

        }

        return s;
    }
};