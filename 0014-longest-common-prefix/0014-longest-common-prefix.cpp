class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        ans=strs[0];
        for(int i=1;i<strs.size();i++){
            int x=0;
            while(x<ans.size()&& x<strs[i].size() && ans[x]==strs[i][x]){
                x++;
            }
            if(x==0) return "";
            ans=ans.substr(0,x);

        }
        return ans;
    }
};