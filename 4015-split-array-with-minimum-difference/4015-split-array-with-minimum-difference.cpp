class Solution {
public:
    long long splitArray(vector<int>& nums) {
      int n=nums.size();

      vector<int>inc(n),dec(n);

      vector<long long>pre(n),suf(n);
      inc[0]=1;
      dec[n-1]=1;
      pre[0]=nums[0];
      suf[n-1]=nums[n-1];

      for(int i=1;i<n;i++){
        if(nums[i]>nums[i-1]){
            inc[i]=inc[i-1];
        }
        pre[i]=pre[i-1]+nums[i];
      }

      for(int i=n-2;i>=0;i--){
        if(nums[i]>nums[i+1]){
            dec[i]=dec[i+1];
        }
        suf[i]=suf[i+1]+nums[i];
      }

      long long res=LLONG_MAX;

      for(int i=0;i<n-1;i++){
        if(inc[i]&&dec[i+1]){
            res=min(res,llabs(pre[i]-suf[i+1]));
        }
      }


        return res==LLONG_MAX?-1:res;
    }
};