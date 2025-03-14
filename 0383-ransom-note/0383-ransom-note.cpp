class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>map;

        for(auto t:ransomNote){
            map[t]++;
        }

        for(auto a:magazine){
            if(map[a]) map[a]--;
            if(!map[a]) map.erase(a);
        }
        if(map.size()==0) return true;
        return false;
    }
};