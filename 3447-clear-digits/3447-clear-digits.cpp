class Solution {
public:
    string clearDigits(string s) {
        
        string ans;
        int c=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]>='0' && s[i]<='9') c++;
            else if(c==0 && (s[i]>='a' && s[i]<='z')){
                ans=s[i]+ans;
            }
            else{
                c--;
            }
        }
        return ans;
    }
};