class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        // if((nums[0]*nums[n-1])>=0)
        // return n;

        int s=0;
        int l=n-1;

       

        while(s<=l){
        int mid=s+(l-s)/2;

            if(nums[mid]>0){
                l=mid-1;
            }else{
                s=mid+1;
            }
        }
        int p=n-s;

        s=0;
        l=n-1;
        while(s<=l){
           int mid=s+(l-s)/2;
            if(nums[mid]<0){
                s=mid+1;
            }
            else l=mid-1;
        }

        int neg=l+1;
        return max(neg,p);
    }
};