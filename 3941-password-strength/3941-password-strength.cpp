class Solution {
public:
    int passwordStrength(string password) {

        unordered_map<char,int>map;

        int a=0;
        int A=0;
        int n=0;
        int s=0;

        for(auto c:password){
            map[c]++;
            if(c>='a' && c<='z'){
                a=map[c]==1?a+1:a;
            }
            else if(c>='A' && c<='Z'){
                A=map[c]==1?A+1:A;
            }
            else if(c>='0' && c<='9'){
                n=map[c]==1?n+1:n;
            }
            else{
                s=map[c]==1?s+1:s;
            }
        }
        return a+A*2+n*3+s*5;
        
    }
};