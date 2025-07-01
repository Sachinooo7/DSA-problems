class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int c=0;
        for(int i=0;i<word.size();i++){
            if(word[i]>='A' && word[i]<='Z'){
                c++;
            }
        }

        if(c==word.size() || c==0) return true;
        if(c==1 && (word[0]>='A' && word[0]<='Z')) return true;
        return false;
    }
};