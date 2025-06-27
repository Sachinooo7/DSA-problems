class Solution {
public:

bool check(char c){
    return (c=='a'||c=='A'||c=='e'||c=='E'||c=='I'||c=='i'||c=='o'||c=='O'||c=='u'||c=='U');
}
    string reverseVowels(string s) {
        
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(!check(s[i])) i++;
            else if(!check(s[j])) j--;
            else if(check(s[i]) && check(s[j])) {
                swap(s[j],s[i]);
                i++;
                j--;
            }
        }
        return s;
    }
};