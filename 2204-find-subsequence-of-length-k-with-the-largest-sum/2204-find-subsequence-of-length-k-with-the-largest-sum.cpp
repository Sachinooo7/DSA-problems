class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
       
        unordered_map<int,int>mapp;

        for(auto a:nums){
            minHeap.push(a);
            if(minHeap.size()>k){
            mapp[minHeap.top()]++;
            minHeap.pop();
            } 
        }
        vector<int>v;
        for(int i=nums.size()-1;i>=0;i--){
            if(!mapp[nums[i]]){
                 v.insert(v.begin(), nums[i]);
            }
            else{
                mapp[nums[i]]--;
                if(!mapp[nums[i]]) mapp.erase(nums[i]);
            }
        }
        return v;

    }
};