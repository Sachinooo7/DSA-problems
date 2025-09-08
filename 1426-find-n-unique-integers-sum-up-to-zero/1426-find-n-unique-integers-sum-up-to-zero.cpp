class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
        int m=n/2;
        for(int i=1;i<=m;i++){
                v.push_back(-i);
            }

         if(n%2){
            v.push_back(0);
         }
            for(int i=1;i<=m;i++){
                v.push_back(i);
            }
        
        return v;
    }
};