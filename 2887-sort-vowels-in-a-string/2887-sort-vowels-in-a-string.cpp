class Solution {
public:
bool check(char c){
    if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U'){
        return 1;
    }
    return 0;
}
    string sortVowels(string s) {
        
     vector<char>v;

       for(auto ch:s){
        if(check(ch)){
            v.push_back(ch);
        }
       }
       sort(v.begin(),v.end());
        int i=0;
       for(int j=0;j<s.size();j++){
        if(check(s[j])){
            s[j]=v[i];
            i++;
            
        }

       }
        return s;
    }
};