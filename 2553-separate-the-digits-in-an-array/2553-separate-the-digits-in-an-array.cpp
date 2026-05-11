class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {

        vector<int>ans;
        int n=nums.size();

        for(int i=n-1;i>=0;i--){
            int a=nums[i];
            while(a){
                int v=a%10;
                ans.insert(ans.begin(),v);
                a=a/10;
            }
        }
        return ans;
        
    }
};