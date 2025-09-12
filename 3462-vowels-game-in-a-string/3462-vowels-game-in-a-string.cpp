class Solution {
public:
    bool doesAliceWin(string s) {
        
        int v=0;
        for(auto a:s){
            if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
                return true;
            }
        }
        return false;
    }
};