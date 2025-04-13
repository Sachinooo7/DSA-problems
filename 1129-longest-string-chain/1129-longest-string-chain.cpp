class Solution {
public:
int len(string text1,string text2){
    int n=text1.size();
    int m=text2.size();
    if(n+1!=m) return 0;
        int i=0;
        int j=0;
        bool b=0;
        while(i<n && j<m){
            if(text1[i]==text2[j]){
                i++;j++;
            }
            else{
                if(b) return 0;
                j++;
                b=1;
            }
        }
        return 1;
}
    int longestStrChain(vector<string>& word) {
        sort(word.begin(), word.end(), [](const string &a, const string &b) {
            return a.size() < b.size(); });

       int n=word.size();
        vector<int>dp(n,1);
        int mx=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(len(word[j],word[i]) && dp[i]<dp[j]+1){
                    dp[i]=dp[j]+1;
                }
            }
                    mx=max(mx,dp[i]);
        }
        return mx;
    }
};