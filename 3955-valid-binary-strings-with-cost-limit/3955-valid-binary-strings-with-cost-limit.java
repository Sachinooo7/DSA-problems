class Solution {

    void solve(StringBuilder temp,List<String>str,int k,int n,int i,int sum,boolean flag){
        if(sum>k)return;
        if(i==n){
            str.add(temp.toString());
            return;
        }
        temp.append('0');
        solve(temp,str,k,n,i+1,sum,false);
        temp.deleteCharAt(temp.length()-1);
        if(!flag){
        temp.append('1');
        solve(temp,str,k,n,i+1,sum+i,true);
         temp.deleteCharAt(temp.length()-1);
        }

        
    }
    public List<String> generateValidStrings(int n, int k) {
        List<String>str=new ArrayList<>();

        solve(new StringBuilder(),str,k,n,0,0,false);
        return str;
        
    }
}