class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>vis(26,0);
        map<char,int>mapp;
        stack<char>stck;

        for(auto a:s){
            mapp[a]++;
        }

        for(char c:s){
            mapp[c]--;
            if(vis[c-'a']) continue;

            while(!stck.empty() && stck.top()>c && mapp[stck.top()]>0){
                vis[stck.top()-'a']=0;
                stck.pop();
            }
            stck.push(c);
            vis[c-'a']=1;
        }
        string str;
        while(!stck.empty()){
            str=stck.top()+str;
            stck.pop();
        }
        return str;
    }
};