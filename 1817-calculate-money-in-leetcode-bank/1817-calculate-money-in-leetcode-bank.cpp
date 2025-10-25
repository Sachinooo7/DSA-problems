class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        
        int i=0;

int x=0;
int j=1;
        while(i<n){
                sum+=x+j;

                j++;         
                i++;   
                if(i%7==0){
                    x++;
                    j=1;
                    }   
        }

        return sum;
    }
};