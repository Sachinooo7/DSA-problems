class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
     int n=grid.size();
     vector<int>arr(n*n+1,0);
int a;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[grid[i][j]]++;
            if(arr[grid[i][j]]>1){
               a=grid[i][j];
            }

        }
     }
     int b;
     for(int i=1;i<=n*n;i++){
        if(arr[i]==0){
            b=i;
        }
     }  
     return {a,b}; 
    }
};