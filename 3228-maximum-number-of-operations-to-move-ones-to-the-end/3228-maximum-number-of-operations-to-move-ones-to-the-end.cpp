class Solution {
public:
    int maxOperations(string s) {

        int sum=0;
        int val=0;
        for(int i=0;i<s.length();i++){
        int cnt=0;
        while(s[i]=='1' && i<s.length()){
            if(i==s.length()-1 && s[i]=='1'){
                return sum;
            }
            cnt++;
            val++;
            i++;
        }
        if(cnt)
        sum=sum+val;

        }
return sum;        
    }
};