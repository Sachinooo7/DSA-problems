class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>v;
        for(int a=0;a<words.size();a++){
            for(auto i:words[a]){
                if(i==x){
                    v.push_back(a);
                    break;
                }
            }
        }
        return v;
    }
};