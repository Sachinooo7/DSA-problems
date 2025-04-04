class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int n=word1.size();
        int m=word2.size();


        vector<int>pre(m+1,0),curr(m+1,0);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(word1[i-1]==word2[j-1]){
                    curr[j]=1+pre[j-1];
                }
                else{
                    curr[j]=max(pre[j],curr[j-1]);
                }
            }
            pre=curr;
        }
        if(pre[m]==0) return n+m;
        return (n+m)-pre[m]*2;
    }
};