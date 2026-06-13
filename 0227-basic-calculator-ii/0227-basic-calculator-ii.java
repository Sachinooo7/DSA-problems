class Solution {
    public int calculate(String s) {

        Stack<Integer>st=new Stack<>();
        s+='+';
        char op='+';
        int n=0;

        for(char c:s.toCharArray()){
           if(c==' ')continue;
            if(Character.isDigit(c)){
                n=n*10+(c-'0');
                continue;
            }

            if(op=='+')st.push(n);
            else if(op=='-')st.push(-n);
            else if(op=='*')st.push(st.pop()*n);
            else if(op=='/')st.push(st.pop()/n);
            op=c;
            n=0;
        }

        int sum=0;
        for(int i:st)sum+=i;
        return sum;

        
    }
}