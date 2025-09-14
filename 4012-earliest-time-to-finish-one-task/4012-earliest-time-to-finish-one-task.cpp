class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int mn=INT_MAX;

        for(auto a:tasks)
        {
            mn=min(mn,a[0]+a[1]);
        }
        return mn;
    }
};