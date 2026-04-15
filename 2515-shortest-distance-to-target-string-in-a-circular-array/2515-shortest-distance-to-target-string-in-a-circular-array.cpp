class Solution {
public:
    int closestTarget(vector<string>& words, string target, int st) {

        int mn=INT_MAX;
        int n=words.size();
        for(int i=0;i<words.size();i++){
            if(words[i]==target){
                mn=min(mn,abs(i-st));
                int v;
                if(st<i){
                     v=st+n-i;
                }
                else v=i+n-st;
                mn=min(mn,v);
            }
        }
        return mn==INT_MAX?-1:mn;
        
    }
};