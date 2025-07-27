class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int ex) {
        
        int mx=0;
        for(auto a:candies){
            mx=max(mx,a);
        }
        int n=candies.size();
        vector<bool>arr(n,false);
        for(int i=0;i<candies.size();i++){
            if(candies[i]+ex>=mx) {
                arr[i]=true;
            }
            else arr[i]=false;
        }
        return arr;
    }
};