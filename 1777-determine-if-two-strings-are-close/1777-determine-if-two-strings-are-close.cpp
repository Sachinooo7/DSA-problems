class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        if(n!=m) return false;

vector<int>freq1(26,0);
vector<int>freq2(26,0);
        for(auto a:word1){
            freq1[a-'a']++;
        }

         for(auto a:word2){
            freq2[a-'a']++;
        }

        for(int i=0;i<26;i++){
            if(freq1[i]==0 ^ freq2[i]==0) return false;

        }


sort(freq1.begin(),freq1.end());
sort(freq2.begin(),freq2.end());
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]) return false;
        }
        return true;
    }
};