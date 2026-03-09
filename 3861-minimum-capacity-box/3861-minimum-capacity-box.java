class Solution {
    public int minimumIndex(int[] capacity, int itemSize) {
        
        int mn=Integer.MAX_VALUE;
        int ind=-1;

        for(int i=capacity.length-1;i>=0;i--){
            if(capacity[i]>=itemSize){
                if(capacity[i]<=mn){
                    ind=i;
                    mn=capacity[i];
                }
            }
        }
        return ind;
    }
}