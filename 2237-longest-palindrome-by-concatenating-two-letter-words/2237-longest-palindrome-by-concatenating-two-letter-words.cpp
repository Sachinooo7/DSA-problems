class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        
        map<string,int>hash;
        for(auto a:words){
            hash[a]++;
        }
        int sum=0;
        bool flag=0;
        for(auto ch:hash){
            string t=ch.first;
            string s=t;
            reverse(s.begin(),s.end());
            if(s==t){
                sum+=ch.second/2;
                if(ch.second%2) flag=1;
            }
            else{
                if(hash.count(s)){
               sum+=min(hash[s],ch.second), hash.erase(s);
                }
            }
        }
        sum=sum*4;
        return (flag?sum+2:sum);
    }
};