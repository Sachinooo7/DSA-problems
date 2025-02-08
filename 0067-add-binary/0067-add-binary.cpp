class Solution {
public:
    string addBinary(string a, string b) {
        int s1=a.size()-1;
        int s2=b.size()-1;
        string ans;
        int c=0;
        
        while(s1>=0 || s2>=0||c){
           int sum=c;
           if(s1>=0)sum+=a[s1--]-'0';
           if(s2>=0)sum+=b[s2--]-'0';
           ans=char(sum % 2+'0')+ans;
           c=sum/2;
        }
        return ans;
    }
};