class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {

        long long tot=0;
        int m=grid.size();
        int n=grid[0].size();
        if(m==1 && n==1) return 0;
        for(int i=0;i<m;i++){
            for(auto a:grid[i]){
                tot+=a;
            }
        }

        long long hsum=0;

         for(int i=0;i<m-1;i++){
            for(auto a:grid[i]){
                hsum+=a;
            }
             if(hsum==tot-hsum) return 1;
        }
        long long vsum=0;

        for(int j=0;j<n-1;j++)
        {
            for(int i=0;i<m;i++){
                vsum+=grid[i][j];
            }
            if(vsum==tot-vsum) return 1;
        }        
        return 0;
        
        
    }
};