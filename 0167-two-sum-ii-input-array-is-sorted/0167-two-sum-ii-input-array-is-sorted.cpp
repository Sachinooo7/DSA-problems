class Solution {
public:
    vector<int> twoSum(vector<int>& num, int tar) {
        int s=0;
        int l=num.size()-1;
        vector<int>v(2);
        while(s<l){
            int sum=num[s]+num[l];
            if(sum>tar) l--;
            else if(sum<tar) s++;
            else {
                v[0]=s+1;
                v[1]=l+1;
                return v;
        }
        }
return v;
    }
};