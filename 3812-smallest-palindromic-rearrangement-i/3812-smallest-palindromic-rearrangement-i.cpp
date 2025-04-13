class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        if(n==1||n==2||n==3) return s;
        int freq[26]={0};
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        string left=""; string m="";
        for(int i=0;i<26;i++){
            if(freq[i]%2==1) m=string(1,i+'a');
            left+=string(freq[i]/2, i+'a');
        }
        string right=left;
        reverse(right.begin(),right.end());
        return left+m+right;
    }
};