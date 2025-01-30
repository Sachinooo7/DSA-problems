class Solution {
public:
    vector<int> plusOne(vector<int>& digit) {
         vector<int>ans;
         int c=0;
         int s=1;
         for(int i=digit.size()-1;i>=0;i--){
            if(digit[i]+s+c==10){
            ans.push_back(0);
            c=1;
            } 
            else{
            ans.push_back(digit[i]+c+s);
            c=0;
            }
            s=0;
         }
         if(c==1) ans.push_back(1);
            reverse(ans.begin(), ans.end());
            return ans;

    }
};