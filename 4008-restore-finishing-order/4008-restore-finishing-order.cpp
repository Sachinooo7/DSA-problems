class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>res;

        for(auto a:order){
            if(find(friends.begin(), friends.end(), a)!=friends.end()){
                res.push_back(a);
            }

        }
        return res;
    }
};