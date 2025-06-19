class Solution {
public:

void solve(vector<string>&ans,string &temp,int op,int cl,int n){
    if(op==cl && op==n){
        ans.push_back(temp);
        return;    }

    if(op>n || cl>n || cl>op) {
        return;
    }

        temp+="(";
        solve(ans,temp,op+1,cl,n);
        temp.pop_back();

        temp+=")";
        solve(ans,temp,op,cl+1,n);
        temp.pop_back();
}
    vector<string> generateParenthesis(int n) {

        vector<string>ans;
        string temp;
        int op=0;
        int cl=0;
        solve(ans,temp,op,cl,n);
        return ans;
        
    }
};