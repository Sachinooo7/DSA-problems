// class Solution {
// public:
// int solve(int i,string s,vector<int>v){
//     if(i==s.size())return 0;
//     if(v[i]!=0) return v[i];
//     int mn=INT_MAX;
   
// for(int j=i;j<s.size();j++){
//      string gv=s.substr(i,j-i+1);
//     string rev = gv;
// reverse(rev.begin(), rev.end());

// if (gv == rev) {
//        int c=1+solve(j+1,s,v);
//         mn=min(mn,c);
//     }
// }
   
//     return v[i]=mn;
// }


//     int minCut(string s) {
//        int n=s.size();
//        vector<int>v(n+1,0);

//        for(int i=s.size()-1;i>=0;i--){
//           int mn=INT_MAX;
   
//           for(int j=i;j<s.size();j++){
//              string gv=s.substr(i,j-i+1);
//              string rev = gv;
//              reverse(rev.begin(), rev.end());

//             if (gv == rev) {
//                  int c=1+v[j+1];
//                  mn=min(mn,c);
//                       }
//                  }
//                  v[i]=mn;

//        }
//        return v[0]-1;
        
//     }
// };



class Solution {
public:
    int minCut(string s) {
        int n = s.size();
        vector<vector<bool>> isPalindrome(n, vector<bool>(n, false));
        vector<int> dp(n + 1, 0); // dp[i] = min cuts for s[i:]

        // Precompute palindrome table
        for (int i = n - 1; i >= 0; --i) {
            for (int j = i; j < n; ++j) {
                if (s[i] == s[j] && (j - i <= 2 || isPalindrome[i + 1][j - 1])) {
                    isPalindrome[i][j] = true;
                }
            }
        }

        // Fill dp table
        for (int i = n - 1; i >= 0; --i) {
            int minCuts = INT_MAX;
            for (int j = i; j < n; ++j) {
                if (isPalindrome[i][j]) {
                    minCuts = min(minCuts, 1 + dp[j + 1]);
                }
            }
            dp[i] = minCuts;
        }

        return dp[0] - 1; // cuts = palindromes - 1
    }
};
