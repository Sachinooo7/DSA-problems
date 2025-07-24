class Solution {
public:

int solve(string &s,int x,string ch){
    int res=0;

     string st1;
        for (char c : s) {
            if (!st1.empty() && st1.back() == ch[0] && c == ch[1]) {
                st1.pop_back();
                res += x;
            } else {
                st1.push_back(c);
            }
        }
        s=st1;
        return res;

}
    int maximumGain(string s, int x, int y) {
        int sum = 0;
        string str;

        if (x < y) {

            sum+=solve(s,y,"ba");
            sum+=solve(s,x,"ab");
        }
        else{
            sum+=solve(s,x,"ab");
            sum+=solve(s,y,"ba");
        }
        return sum;
    }
};
