class Solution {
public:
    long long minArraySum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_set<int>vis;
        long long sum=0;
        for(int a:nums){
            int v=a;
            
            for(int j=1;j*j<=a;j++){
                if(a%j==0){

                    if(vis.count(j)){
                        v=min(v,j);
                    }

                    if(vis.count(a/j)){
                        v=min(v,a/j);
                    }
                    
                }
            }
            vis.insert(a);
            sum+=v;
        }
       
        return sum;
        
    }
};