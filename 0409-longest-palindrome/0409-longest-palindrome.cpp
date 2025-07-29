class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map<char,int>mapp;
        int even=0;
        for(auto a:s){
            mapp[a]++;
        }
        bool f=false;

        for(auto m:mapp){
            even+=(m.second/2)*2;
            if(m.second%2){
              f=1;
            }
        }
        return f?even+1:even;
        
    }
};