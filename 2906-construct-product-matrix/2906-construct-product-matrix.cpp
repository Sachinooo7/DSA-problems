class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {

        long long mul=1;
        int r=grid.size();
        int c=grid[0].size();

        vector<vector<int>>first(r,vector<int>(c));
        vector<vector<int>>second(r,vector<int>(c));


        int fir=1;
        int sec=1;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                first[i][j] = ( (long long)fir * sec ) % 12345;
                fir=first[i][j];
                sec=grid[i][j];
            }
        }
        fir=1;
        sec=1;

        for(int i=r-1;i>=0;i--){
            for(int j=c-1;j>=0;j--){
                second[i][j] = ( (long long)fir * sec ) % 12345;
                fir=second[i][j];
                sec=grid[i][j];

            }
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){

                 grid[i][j] = ( (long long)first[i][j] * second[i][j] ) % 12345;
            }
        }


        return grid;
    }
};