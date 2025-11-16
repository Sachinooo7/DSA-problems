class Solution {
public:
    int numSub(string s) {
        int md=1e9+7;

        int res=0;
        int ch=0;

        for(auto a:s){
            if(a-'0'==0) ch=0;
            else{
                ch++;
            }
            res+=ch%md;
            res=res%md;
        }
        return res;
    }
};