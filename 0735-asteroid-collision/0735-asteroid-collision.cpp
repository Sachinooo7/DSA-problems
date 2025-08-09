class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        
        vector<int>dp;
        dp.push_back(ast[0]);
        int i=1;

        while(i<ast.size()){
            if(dp.size()>0 && dp.back()>0 && ast[i]<0){
                if(dp.back()<-ast[i] ){
                    dp.pop_back(); continue;
                }
                else if( dp.back()==-ast[i]){
                    dp.pop_back();
                    i++;
                }
                else i++;
            }
            else 
            {
                dp.push_back(ast[i]);
                i++;
            }

        }
        return dp;
    }
};