class Solution {
public:
    int minOperations(string s) {
        int mx=-1;
        for(auto ch:s){
            if(ch=='a')continue;
            int num=ch-'a';
            mx=max(mx,25-num);

        }
        return mx+1;
    }
};