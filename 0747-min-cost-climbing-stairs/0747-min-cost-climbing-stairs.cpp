class Solution {
public:


    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int pre=0;
        int last=0;
for(int i=2;i<=n;i++){
    int cur=min(pre+cost[i-1],last+cost[i-2]);
    last=pre;
    pre=cur;
}
return pre;

    }
};