class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int top=r;
        int botm=-1;
        int left=c;
        int right=-1;

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
               if(grid[i][j]){
                top=min(top,i);
                botm=max(botm,i);
                left=min(left,j);
                right=max(right,j);
               }
            }
        }

        return (botm-top+1)*(right-left+1);
        
    }
};