class Solution {
public:
    int maxVowels(string s, int k) {

        int vol=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a'|| s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i'){
                vol++;
            }
        }
        int mx=vol;
        int st=0;

        for(int i=k;i<s.size();i++){
            if(s[i]=='a'|| s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i'){
                vol++;
            }
            if(s[st]=='a'|| s[st]=='e' || s[st]=='o' || s[st]=='u' || s[st]=='i'){
                vol--;
            }
            st++;
            mx=max(mx,vol);

        }
        return mx;
        
    }
};