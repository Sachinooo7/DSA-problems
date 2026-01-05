class Solution {
    public long maxMatrixSum(int[][] matrix) {

        long sum=0;
        int mn=Integer.MAX_VALUE;
        int n=0;

        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                sum+=Math.abs(matrix[i][j]);
                if(matrix[i][j]<0)n++;
                mn=Math.min(mn,Math.abs(matrix[i][j]));
            }
        }
        return (n%2==0?sum:sum-2*mn);
        
    }
}