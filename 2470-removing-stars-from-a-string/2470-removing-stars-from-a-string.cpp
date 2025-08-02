class Solution {
public:
    string removeStars(string s) {
        string str;

        for(auto a:s){
            if(a=='*'){
                str.pop_back();
            }
            else{
                str+=a;
            }
        }
        return str;
    }
};