class Solution {
public:
    int findLHS(vector<int>& nums) {
    unordered_map<int,int>mapp;
    for(auto a:nums){
        mapp[a]++;
    }
int mx=0;
    for(auto& m:mapp){
        if(mapp.count(m.first-1)){
            mx=max(mx,m.second+ mapp[m.first-1]);
        }
        if(mapp.count(m.first+1)){
            mx=max(mx,m.second+ mapp[m.first+1]);
        }

    }
     return mx;
    }
};