class Solution {
public:
    string minWindow(string s, string t) {
        int f=-1;
        unordered_map<char,int>hash;
        for(auto a:t){
            hash[a]++;
        }
        if(t.size()>s.size()) return "";

        int i=0; int j=0;
        int mx=INT_MAX;
        int size=0;
        while(j<s.size()){
            if(hash[s[j]]>0){
                size++;
            }
            hash[s[j]]--;
            
            while(size==t.size()){
                
                if(mx>(j-i+1)){
                    mx=j-i+1;
                    f=i;
                }
                hash[s[i]]++;
                if(hash[s[i]]>0) size--;
                i++;

            }           
            j++;
        }
        return (f<0?"":s.substr(f,mx));
    }
};