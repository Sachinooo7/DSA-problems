class Solution {
public:
    int longestBalanced(vector<int>& nums) {


        unordered_map<int,bool>mapp;
        int mx=0;
        for(int i=0;i<nums.size();i++){
            int even=0;
            int odd=0;
            for(int j=i;j<nums.size();j++){
                if(mapp[nums[j]]!=1){
                    if(nums[j]%2==0){
                        even++;
                    }
                    else odd++;
                }
                mapp[nums[j]]=1;

                if(even==odd){
                    mx=max(mx,j-i+1);
                }

            }
            mapp.clear();
        }
        return mx;
        
    }
};