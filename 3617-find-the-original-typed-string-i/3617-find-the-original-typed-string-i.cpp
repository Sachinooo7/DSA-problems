class Solution {
public:
    int possibleStringCount(string word) {
        int c=0;
        for(int i=1;i<word.size();i++){
            if(word[i]==word[i-1]){
                c++;
            }
        }
        return c+1;
        
    }
};