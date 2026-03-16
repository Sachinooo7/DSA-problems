class Solution {
    public int countCommas(int n) {
           if(n < 1000){
            return 0;
        }

        int commas = 0;
        for(int i = n; i >= 1000; i--){
            commas++;
        }

        return commas;
    }
}