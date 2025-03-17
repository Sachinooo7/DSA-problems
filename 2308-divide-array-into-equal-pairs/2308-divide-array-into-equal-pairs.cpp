class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        unordered_map<int,int>map;
        int c=0;
        for(auto a:nums){
            map[a]++;
            if(map[a]==2) {
                c++;
                map[a]=0;
                }
        }
        if(c==nums.size()/2) return true;
        return false;
    }
};