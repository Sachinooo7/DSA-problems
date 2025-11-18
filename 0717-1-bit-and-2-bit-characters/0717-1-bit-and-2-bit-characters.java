class Solution {
    public boolean isOneBitCharacter(int[] bits) {


     int n=bits.length;
      if(bits[n-1]==1)return false;

        int i=0;
        while(i<n-1){
            if(bits[i]==1) i+=2;
            else i+=1;
        }
        return i==n-1;
 
    }
}