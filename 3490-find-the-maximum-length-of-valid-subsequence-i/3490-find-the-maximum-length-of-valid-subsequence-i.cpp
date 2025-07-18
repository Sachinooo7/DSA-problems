class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(n,0);
        for(int i=0;i<n;i++){
            arr[i]=nums[i]%2;
        }

        vector<int>odd(n,0);
        vector<int>even(n,0);
int od=0;
int ev=0;
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(arr[i]==arr[j]){
                    even[i]=even[j]+1;
                    ev=max(ev,even[i]);
                    break;
                }
            }
        }

        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(arr[i]!=arr[j]){
                    odd[i]=odd[j]+1;
                    od=max(od,odd[i]);
                    break;
                }
            }
        }
        return od>ev?od+1:ev+1;

        
    }
};