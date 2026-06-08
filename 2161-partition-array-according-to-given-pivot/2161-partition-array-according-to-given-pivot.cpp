class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        int l=0;
        int g=0;
        int n=nums.size();

        for(int a:nums){
            if(a<=pivot)l++;
            else if(a>pivot)g++;
        }
       vector<int>res(n);
       int i=0;
       int j=l;
        for(int a:nums){
            if(a<pivot){
                res[i]=a;i++;
            }
            else if(a>pivot){
                res[j]=a;j++;
            }
        }
        while(i<l)res[i++]=pivot;
return res;

        
    }
};