class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        
        int len=words[0].size();
        unordered_map<string,int>hash;
        for(auto a:words){
            hash[a]++;
        }
        vector<int>res;
        for(int f=0;f<len;f++){
            int size=0;

            unordered_map<string,int>seen;
            for(int i=f;i+len<=s.size();i+=len){
                string str=s.substr(i,len);

                auto itr=hash.find(str);
                if(itr==hash.end()){
                    size=0;
                    seen.clear();
                    continue;
                }

                seen[str]++;
                size++;

                while(seen[str]>itr->second){
                    string temp=s.substr(i-(size-1)*len,len);
                    seen[temp]--;
                    size--;
                }

                if(size==words.size()) res.push_back(i-(size-1)*len);
            
            }


        }
        return res;
    }
};