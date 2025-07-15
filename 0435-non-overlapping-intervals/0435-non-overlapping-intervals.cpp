class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

sort(intervals.begin(), intervals.end(), [](auto& a, auto& b) {
            return a[1] < b[1];
        });
        int first = INT_MIN;
        int second = INT_MIN;
        int c = 0;

        for (auto a : intervals) {
            if (a[0] < second) {
                c++;
            }
             else 
            {
                second = a[1];
            }
        }
        return c;
    }
};