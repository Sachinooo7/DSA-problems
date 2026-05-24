class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {


        vector<int>res;
        int c=1;
        for(int a:nums){
            if(res.size()==0){
                res.push_back(a);
            
            }
            else{
                if(res.back()!=a ){
                    res.push_back(a);
                    c=1;
                }
                else if(c<k) {
                    res.push_back(a);
                    c++;
                }
                else c++;
            }
        }
        return res;
        
    }
};