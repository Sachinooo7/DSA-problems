class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>map;
        for(auto i:s){
            map[i]++;
        }
        int odd=0;
        int even=INT_MAX;
        
        for(auto x:map){
            if(x.second>odd && x.second%2){
                odd=x.second;
            }
            if(x.second<even && (x.second%2==0) )
            {
                even=x.second;
            }
                }
        return odd-even;
    }
};