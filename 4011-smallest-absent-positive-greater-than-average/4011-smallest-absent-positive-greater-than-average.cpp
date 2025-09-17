class Solution {
public:
    int smallestAbsent(vector<int>& nums) {

        unordered_map<int,int>mp;

        int sum=0;

        for(auto a:nums){
            sum+=a;
            mp[a]=1;
        }     
        sum=(sum<0?0:sum);
        int avg=sum/nums.size();
        int s=(avg<0?1:avg+1);

        for(int i=s;i<=101;i++){
            if(mp[i]!=1){
                return i;
            }
        }  
        return 1;
    }
};