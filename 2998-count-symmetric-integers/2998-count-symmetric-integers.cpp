class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int c=0;
      for(long long i=low;i<=high;i++){
        string s=to_string(i);
        if(s.size()%2==0){
            int l=0;
            for(int a=0;a<s.size()/2;a++){
                l+=s[a]-'0';
            }
            int r=0;
            for(int a=s.size()/2;a<s.size();a++){
                r+=s[a]-'0';
            }
            if(l==r){
                c++;
            }
        }
      }
        return c;
    }
};