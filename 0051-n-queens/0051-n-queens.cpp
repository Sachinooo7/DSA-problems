class Solution {
public:
bool check(vector<string>&t,int row,int col,int n){
   int r=row;
   int c=col;
    for(int i=col;i>=0;i--){
        if(t[r][i]=='Q'){       
            return false;
        }
    }
    r=row;
   c=col;

    while(r>=0 && c>=0){
        if(t[r][c]=='Q'){
           return false;
           }
        r--;
        c--;
    }
    r=row;
   c=col;
    while(r<n && c>=0){
        if(t[r][c]=='Q'){
           return false;
           }
        r++;
        c--;
    }

return true;
}
void solve(vector<vector<string>>&ans,vector<string>&t,int n,int x){
    if(x==n){
        ans.push_back(t);
        return;
    }
    for(int i=0;i<n;i++){
            if(check(t,i,x,n)){
            t[i][x]='Q';
            solve(ans,t,n,x+1);
            t[i][x]='.';

            }        
    }

}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>t(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            t[i]=s;
        }

        solve(ans,t,n,0);
        return ans;
    }
};