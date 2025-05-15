class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string>ans;
        int c=groups[0];
        ans.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            if(groups[i]!=c){
                ans.push_back(words[i]);
                c=groups[i];
            }
        }
        return ans;
    }
};