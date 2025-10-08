class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>v(nums2.size());

        unordered_map<int,int>mapp;

        for(int i=0;i<nums2.size();i++){
            mapp[nums2[i]]=i;
        }

        stack<int>s;

        s.push(-1);

        for(int i=nums2.size()-1;i>=0;i--){
            
            while(s.top()<nums2[i] && s.top()!=-1){
                s.pop();
            }
              v[i]=s.top();
              s.push(nums2[i]);
        }

        vector<int>res(nums1.size());

        for(int i=0;i<nums1.size();i++){
            res[i]=v[mapp[nums1[i]]];
        }
        return res;
    }
};