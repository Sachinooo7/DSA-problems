class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        unordered_map<int,int>mapp;
        int v=-1;
        int c=0;

        int mn=-1;
        for(auto a:arr){
        mapp[a]++;
        }

        for(auto a:mapp){
            c=a.second;
        if(a.first==a.second && c>mn){
        mn=c;
        v=a.first;
        }
        }
        return v;

    }
};