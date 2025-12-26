class Solution {
    public int bestClosingTime(String customers) {
        
        int mn=0;
        int ind=0;
        int c=0;

        int n=customers.length();

        for(int i=0;i<n;i++){
            if(customers.charAt(i)=='Y')c++;
        }
        if(c==0)return 0;
      int prev=c;
      int curr=c;
      
        for(int i=1;i<=n;i++){
            if(customers.charAt(i-1)=='Y'){
                mn=prev-1;
            }
            else{
                mn=prev+1;
            }
          
            if(mn<curr){
                curr=mn;
                ind=i;
            }
                prev=mn;
            
        }
        
        return ind;

    }
}