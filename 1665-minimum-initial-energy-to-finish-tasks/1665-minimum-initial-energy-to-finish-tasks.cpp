class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        
        sort(tasks.begin(), tasks.end(), [](vector<int>& a, vector<int>& b) {
            return (a[1] - a[0]) > (b[1] - b[0]);
        });

        int eng = 0;
        int ans = 0;

        for (auto &task : tasks) {
            int actual = task[0];
            int minimum = task[1];

            if (eng < minimum) {
                ans += (minimum - eng);
                eng = minimum;
            }
            eng-= actual;
        }

        return ans;
    }
};