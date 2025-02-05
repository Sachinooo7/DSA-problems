class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int i=0;
        int j=-1;
        if(s1==s2) return true;
        
            while(s1[i]==s2[i]){
                i++;
            }
            for(int x=i;x<s1.size();x++){
                if(s1[x]==s2[i] && s1[x]!=s2[x]){
                    j=x;
                    break;
                }
            }
            
            if(j==-1) return false;
            swap(s1[i],s1[j]);
            if(s1==s2) return true;
            return false;
        
    }
};