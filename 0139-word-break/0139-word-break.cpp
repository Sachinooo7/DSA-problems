class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {

        unordered_map<string,bool>mapp;

        int n=s.size();
        vector<int>dp(n+1,0);
        int mx=0;
        for(string a:wordDict){
            int l=a.size();
            mx=max(mx,l);
            mapp[a]=1;
        }

        dp[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=i-1; j>=max(0,i-mx);j--){
                if(dp[j] && mapp[s.substr(j,i-j)]){
                    dp[i]=1;
                    break;
                }
            }
        }
        return dp[n];
        
    }
};