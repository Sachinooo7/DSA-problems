class Solution {
public:
    int minInsertions(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        int n=s.size();

        // vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        vector<int>pre(n+1,0),curr(n+1,0);

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==t[j-1]){
                    curr[j]=1+pre[j-1];
            }
            else{
                curr[j]=max(pre[j],curr[j-1]);
            }

            }
            pre=curr;
        }
        return n-pre[n];
    }
};