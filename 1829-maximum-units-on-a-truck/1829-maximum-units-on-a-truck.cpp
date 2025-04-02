class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int ts) {
         map<int, int, greater<int>> mp;
        for(auto a:boxTypes){
            mp[a[1]]=mp[a[1]]+a[0];
        }

        int size=0;

        for(auto a:mp){
            if(ts){
                if(ts<a.second){
                    size+=a.first*ts;
                    return size;
                }
                else{
                size+=a.first*a.second;
                }
                ts-=a.second;
            }

        }
        return size;

    }
};