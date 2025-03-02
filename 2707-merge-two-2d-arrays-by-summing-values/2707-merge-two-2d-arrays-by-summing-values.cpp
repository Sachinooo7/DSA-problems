class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int>mapp;
        for( auto a:nums1){
            mapp[a[0]]=a[1];
        }

        for(auto a:nums2){
            if(mapp[a[0]]){
                mapp[a[0]]=mapp[a[0]]+a[1];
            }else{
                mapp[a[0]]=a[1];
            }
        }
        vector<vector<int>>ans;
        for(auto a:mapp){
            vector<int>v;
            v.push_back(a.first);
            v.push_back(a.second);
            ans.push_back(v);
        }
    return ans;
    }

};