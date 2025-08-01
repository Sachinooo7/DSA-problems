class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {

        unordered_map<string,int>mapp;
        int n=grid.size();

        for(int i=0;i<n;i++){
            string temp;
            for(int j=0;j<n;j++){
                temp+=to_string(grid[j][i])+',';
            }
            mapp[temp]++;
        }
int res=0;
        for(int i=0;i<n;i++){
            string temp;
            for(int j=0;j<n;j++){
                temp+=to_string(grid[i][j])+',';
            }
            res+=mapp[temp];
        }

      
        return res;
        
    }
};