class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int i=0;
        int j=0;
        if(s.length()==0)return 0;
        int m=1;
        unordered_map<char,int>hash;
        while(j<s.size()){
            hash[s[j]]++;
            while(hash[s[j]]>1){
                hash[s[i]]--;
                i++;
            }
            m=max(m,j-i+1);
            j++;

        }
        return m;
    }
};