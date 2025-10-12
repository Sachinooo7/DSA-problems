class Solution {
public:
    int longestBalanced(string s) {

int mx=1;
        for(int i=0;i<s.size();i++){
            unordered_map<int,int>mapp;
            int j=i;
            int c=0;
            int l=0;
            while(j<s.size()){
                if(mapp[s[j]]==0){
                    c++;
                }
                mapp[s[j]]++;
                l=max(l,mapp[s[j]]);
                int n=j-i+1;
                if(c*l==n){
                    mx=max(mx,n);
                }
                j++;
            }
        }
        return mx;
        
    }
};