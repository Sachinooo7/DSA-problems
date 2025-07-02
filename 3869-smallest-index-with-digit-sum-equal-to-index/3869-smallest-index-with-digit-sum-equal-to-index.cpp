class Solution {
public:

long sum(int i){
    long sum=0;
    while(i){
        sum+=i%10;
        i=i/10;
    }
    
return sum;
    }

    int smallestIndex(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            if(i==sum(nums[i])) return i;
        }
        
        return -1;
    }
};