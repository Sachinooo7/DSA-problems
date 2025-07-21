class Solution {
public:
    bool repeatedSubstringPattern(string s) {


        int n=s.size();
        for(int i=n/2;i>0;i--){
            if(n%i==0){
            string temp=s.substr(0,i);
            bool b=1;
            for(int j=0;j<n;j+=i){
                if(s.substr(j,i)!=temp) {
                    b=0;
                    break;
                }
            }
            if(b) return true;
            }
        }
        return false;
        
    }
};