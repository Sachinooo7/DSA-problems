class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int tSize) {
        
        sort(boxTypes.begin(),boxTypes.end(),[](auto& a,auto& b){
            return a[1]>b[1];
        });
int mx=0;
        for(auto a:boxTypes){
            if(tSize<a[0]){
                mx+=tSize*a[1];
                break;
            }
            mx+=a[0]*a[1];
            tSize-=a[0];
        }
        return mx;
    }
};