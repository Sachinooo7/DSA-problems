class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows==1) return s;

        string res;
       
        for(int i=0;i<numRows;i++){
            
            int idx=i;
            int upside=2*(i);
            int downside=2*(numRows-1-i);
            bool flag=1;

        while(idx<s.size()){
            res+=s[idx];
            if(i==0){
                idx+=downside;
            }
            else if(i==numRows-1){
                idx+=upside;
            }
            else{
                if(flag){
                    idx+=downside;
                }
                else{
                    idx+=upside;
                }
            flag=!flag;
            }
        }
        }
        return res;
    }
};