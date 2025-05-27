class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        
        int sum=0;
        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                if(matrix[i][j]){
                    matrix[i][j]=min(min(matrix[i-1][j],matrix[i][j-1]),matrix[i-1][j-1])+1;
                    sum+=matrix[i][j];
                }
            }
        }
        for(int i=1;i<r;i++) sum+=matrix[i][0];
        for(int j=0;j<c;j++) sum+=matrix[0][j];
        return sum;
    }
};