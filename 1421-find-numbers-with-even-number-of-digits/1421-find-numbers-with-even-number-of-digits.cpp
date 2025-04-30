class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int a:nums){
            string s=to_string(a);
            if(s.size()%2==0) c++;
        }
        return c;
    }
};