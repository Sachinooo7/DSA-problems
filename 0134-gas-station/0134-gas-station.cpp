class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int totg=0;
        int toc=0;
        int curg=0;
        int s=0;

        for(int i=0;i<n;i++){
            totg+=gas[i];
            toc+=cost[i];
            curg+=gas[i]-cost[i];
            if(curg<0){
                s=i+1;
                curg=0;
            }
        }
        return (totg<toc)?-1:s;
    }
};