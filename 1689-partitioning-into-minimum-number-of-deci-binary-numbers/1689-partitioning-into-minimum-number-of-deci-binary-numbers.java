class Solution {
    public int minPartitions(String s) {
        int m=0;

        for(int i=0;i<s.length();i++){
            m=Math.max(m,s.charAt(i)-'0');
        }
        return m;
        
    }
}