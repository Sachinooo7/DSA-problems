class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int maxx=nums[0]; int crmx=0;
        int minn=nums[0]; int crmn=0;

        int tot=0;
        for(auto a:nums){
            tot+=a;
            crmx=max(crmx+a,a);
            maxx=max(maxx,crmx);

            crmn=min(crmn+a,a);
            minn=min(minn,crmn);
           
        }
        return maxx<0?maxx:max(maxx,tot-minn);
    }
};