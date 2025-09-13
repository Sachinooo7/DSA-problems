class Solution {
public:
    int maxFreqSum(string s) {
        
int arr[26]={0};
for(auto a:s){
    arr[a-'a']++;
}

int v=max(arr[0],arr[4]);
 v=max(v,arr[14]);
 v=max(v,arr[8]);
 v=max(v,arr[20]);

 arr[0]=0;
 arr[4]=0;
 arr[8]=0;
 arr[14]=0;
 arr[20]=0;
 int mx=0;
 for(auto a:arr){
    mx=max(mx,a);
 }
        return mx+v;
    }
};