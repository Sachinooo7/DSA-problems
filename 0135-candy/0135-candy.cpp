class Solution {
public:
    int candy(vector<int>& rat) {
    int n=rat.size();
    if(n==1)return 1;
    vector<int>v(n,1);
    if(rat[1]<rat[0]) v[0]=2;
    for(int i=1;i<n-1;i++){
        if(rat[i-1]<rat[i] && v[i]<=v[i-1]){
            v[i]=v[i-1]+1;
        }
        if(rat[i+1]<rat[i] && v[i]<=v[i+1]){
            v[i]=v[i+1]+1;
        }
    }
    int c=0;
    if(rat[n-1]>rat[n-2] && v[n-2]>=v[n-1]) v[n-1]=v[n-2]+1;
    c=v[n-1];
    for(int i=n-2;i>0;i--){
         if(rat[i-1]<rat[i] && v[i]<=v[i-1]){
            v[i]=v[i-1]+1;
        }
        if(rat[i+1]<rat[i] && v[i]<=v[i+1]){
            v[i]=v[i+1]+1;
        }
        c+=v[i];
    }
    if(rat[1]<rat[0] && v[0]<=v[1]) v[0]=v[1]+1;
    c+=v[0];
    return c;
    }
};