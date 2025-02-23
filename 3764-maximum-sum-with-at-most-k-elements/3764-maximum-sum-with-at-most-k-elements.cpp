class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
       priority_queue<int> maxHeap;
    
    for (int i = 0; i < grid.size(); i++) {
        if (limits[i] == 0 || grid[i].empty()) continue;  

        sort(grid[i].rbegin(), grid[i].rend());  
        
        int take = min((int)grid[i].size(), limits[i]);  
        for (int j = 0; j < take; j++) {
            maxHeap.push(grid[i][j]);
        }
    }

    long long maxSum = 0;  
    while (k-- > 0 && !maxHeap.empty()) {
        maxSum += maxHeap.top();
        maxHeap.pop();
    }

    return maxSum;
    }
};