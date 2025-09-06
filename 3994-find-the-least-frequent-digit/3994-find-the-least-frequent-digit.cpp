class Solution {
public:
    int getLeastFrequentDigit(int n) {

        int arr[10]={0};

        while(n){
            arr[n%10]++;
            n=n/10;
        }
        int mn=INT_MAX;
int m;
        for(int x=9;x>=0;x--){
            if(arr[x]!=0 && arr[x]<=mn){
                mn=arr[x];
                m=x;
            }
        }
        return m;
        
    }
};