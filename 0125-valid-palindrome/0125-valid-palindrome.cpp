class Solution {
public:
    bool isPalindrome(string s) {
        int f=0;
        int l=s.size();

        while(f<l){
            if(!isalnum(s[f])) f++;
            else if(!isalnum(s[l])) l--;
            else if(tolower(s[f])!=tolower(s[l])) return false;
            else{
                f++;
                l--;
            }
        }
        
     
        return true;
    }
};