class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {

        unordered_map<int,int>mapp;
        int c=0;
        for(auto a:nums){
            if(mapp[k-a]>0){
                mapp[k-a]--;
                c++;
            }
            else{
                mapp[a]++;
            }
        }
        return c;
        
    }
};