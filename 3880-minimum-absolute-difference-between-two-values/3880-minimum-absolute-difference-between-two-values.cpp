class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {

        int one=INT_MAX;
        int two=INT_MAX;
        int mn=INT_MAX;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                mn=min(mn,abs(i-two));
                one=i;
            }
            else if(nums[i]==2){
                mn=min(mn,abs(i-one));
                two=i;
            }
        }
        return (mn>100?-1:mn);
        
    }
};