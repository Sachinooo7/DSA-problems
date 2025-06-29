class Solution {
public:
    vector<string> partitionString(string s) {

        string temp;
        vector<string>res;
        unordered_map<string,bool>mapp;

        for(auto a:s){
            temp+=a;
            if(!mapp[temp]){
                res.push_back(temp);
                mapp[temp]=1;
                temp="";
            }
        }
        return  res;
        
    }
};