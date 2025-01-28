class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
     int kf=count(nums.begin(),nums.end(),k);
     int mx=0;

     for(int i=1;i<=50 ;i++){
        if(i==k) continue;
        int cur=0; int mxcur=0;
        for(auto n:nums){
            cur+=n==i?1:n==k?-1:0;
            cur=max(cur,0);
            mxcur=max(mxcur,cur);
        }
        mx=max(mxcur,mx);
        
     }        
return mx+kf;
    }
};