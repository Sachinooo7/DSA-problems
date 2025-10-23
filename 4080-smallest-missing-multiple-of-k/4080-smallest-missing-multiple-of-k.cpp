class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        unordered_map<int,bool>mapp;

        for(auto a:nums){
            mapp[a]=1;
        }
        int i=k;
        for(int j=0;j<=nums.size();j++){
            if(mapp[i]!=1)return i;
            i=i+k;
        }

        return 0;

    }
};