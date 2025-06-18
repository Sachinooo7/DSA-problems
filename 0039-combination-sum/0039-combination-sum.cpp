class Solution {
public:
void solve(vector<vector<int>>&ans,vector<int>v,vector<int>& cand,int tar,int ind,long sum){
    if(sum==tar){
        ans.push_back(v);
        return;
    }
    if(sum>tar)return;

    for(int i=ind;i<cand.size();i++){
        sum+=cand[i];
        v.push_back(cand[i]);
        solve(ans,v,cand,tar,i,sum);
        v.pop_back();
        sum-=cand[i];
    }
}
    vector<vector<int>> combinationSum(vector<int>& cand, int tar) {
         vector<vector<int>> ans;
         vector<int>v;
         long sum=0;
         
         solve(ans,v,cand,tar,0,sum);
         return ans;

    }
};