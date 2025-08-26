class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxArea = 0, max = 0;

        for (auto t:dimensions) {
            int l = t[0];
            int w = t[1];
            int curr = l * l + w * w;

            if (curr > max || (curr == max && l * w > maxArea)) {
                max = curr;
                maxArea = l * w;
            }
        }
        return maxArea;
    }
};