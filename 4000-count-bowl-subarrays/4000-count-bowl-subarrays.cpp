class Solution {
public:
    long long bowlSubarrays(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n);
        vector<int>right(n);
        left[0]=nums[0];

        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],nums[i]);
        }
         right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],nums[i]);
        }
long long cnt=0;
        for(int i=0;i<n;i++){
            if(left[i]!=nums[i] && right[i]!=nums[i]){
                cnt++;
            }
        }
        return cnt;
    }
};