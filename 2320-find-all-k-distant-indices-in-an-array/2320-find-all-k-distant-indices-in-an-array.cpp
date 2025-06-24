class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        
        vector<int>res;
        vector<int>keys;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==key){
                keys.push_back(i);
            }
        }

        for(int i=0;i<n;i++){
            for(auto a:keys){
                if(abs(i-a)<=k){
                    res.push_back(i);
                    break;
                }
            }
        }
        return res;
    }
};