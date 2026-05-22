class Solution {
public:

int check(int m,int lm,int k){
    long long mul=1;

    for(int i=0;i<k;i++){
        mul=mul*m;
        if(mul>lm)return 0;
    }
return 1;
}
int solve(int a,int k){
    if(a<0)return -1;
    if(a==0)return a;

    int l=1;
    int u=a;
    int ans=0;

    while(l<=u){
    int mid=l+(u-l)/2;
    if(check(mid,a,k)){
        ans=mid;
        l=mid+1;
    }
    else{
        u=mid-1;
    }

    }
    return ans;
}
    int countKthRoots(int l, int r, int k) {

        if(k==1)return r-l+1;

        return solve(r,k)-solve(l-1,k);
        
    }
};