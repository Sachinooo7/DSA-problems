class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        unordered_map<string,int>mapp;
        vector<string>res;
        res.push_back(words[0]);

        for(int i=1;i<words.size();i++){

            string temp=words[i];
            string fir=words[i-1];
    
            sort(fir.begin(),fir.end());
            sort(temp.begin(),temp.end());
            if(fir!=temp){
                res.push_back(words[i]);
            }
        }
        return res;
    }
};