class Solution {

    List<Integer> solve(String str,int s,int e){
        List<Integer>res=new ArrayList<>();
        if(s==e){
            res.add(str.charAt(s)-'0');
        }

        if(e-s==1 && Character.isDigit(str.charAt(s))){

            int n1=str.charAt(s)-'0';
            int num=(n1*10)+str.charAt(e)-'0';
            res.add(num);
        }

        for(int i=s;i<=e;i++){
            if(Character.isDigit(str.charAt(i)))continue;
            List<Integer>left=solve(str,s,i-1);
            List<Integer>right=solve(str,i+1,e);
             char ch=str.charAt(i);
            for(int l:left){
                for(int r:right){
                    if(ch=='+'){
                        res.add(l+r);
                    }
                    else if(ch=='-'){
                        res.add(l-r);
                    }
                    else{
                        res.add(l*r);
                    }
                }
            }
        }
            return res;

    }
    public List<Integer> diffWaysToCompute(String expr) {
       int n=expr.length();
        return solve(expr,0,n-1);
    }
}