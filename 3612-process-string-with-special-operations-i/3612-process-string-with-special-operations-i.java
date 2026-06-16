class Solution {
    public String processStr(String s) {

        StringBuilder res=new StringBuilder();

        for(char ch:s.toCharArray()){
            if(ch>='a' && ch<='z'){
                res.append(ch);
            }
            else if(ch=='*' && !res.isEmpty()){

                res.deleteCharAt(res.length()-1);
            }
            else if(ch=='#'){
                res.append(res);
            }
            else{
                res.reverse();
            }
        }
        return res.toString();
        
    }
}