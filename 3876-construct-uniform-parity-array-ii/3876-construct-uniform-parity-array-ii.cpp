class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        sort(nums1.begin(),nums1.end());
        bool odd=false;
        bool flag=1;

        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==0 && !odd){
            flag=0;
            break;
            }
            if(nums1[i]%2!=0)odd=true;
        }
          odd=false;
        if(flag)return true;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2!=0 && !odd){
                return false;
            }
            if(nums1[i]%2!=0){
                odd=true;
            }
        }
        return true;
        
    }
};