class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>hash;
        hash['I']=1;
        hash['V']=5;
        hash['X']=10;
        hash['L']=50;
        hash['C']=100;
        hash['D']=500;
        hash['M']=1000;

int n=s.size();
        int sum=hash[s[n-1]];
        for(int i=n-2;i>=0;i--){
            if(hash[s[i]]<hash[s[i+1]]){
                sum-=hash[s[i]];
            }
            else{
                sum+=hash[s[i]];
            }
        }
        return sum;
        
    }
};