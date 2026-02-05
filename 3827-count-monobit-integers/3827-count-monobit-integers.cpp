class Solution {
public:
    int countMonobit(int n) {
         int cnt=0;
        int sum=0;
        int k=0;

        while(sum<=n){
            
            sum=sum+pow(2,k);
            k++;
            cnt++;

        }
        return cnt;
    }
};