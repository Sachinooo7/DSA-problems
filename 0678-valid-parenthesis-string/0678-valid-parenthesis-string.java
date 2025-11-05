class Solution {
    public boolean checkValidString(String s) {

         Integer open=0;
         Integer close=0;
        for(char c:s.toCharArray()){
            if( c=='('){
                open++;
                close++;
            }
            else if(c==')'){
                open--;
                close--;
            }
            else {
                  open--;
                  close++; 
                             }
                             if(open<0) open=0;
                             if(close<0) return false;
        }

        return open==0;
        
    }
}