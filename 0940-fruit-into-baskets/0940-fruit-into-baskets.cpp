class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mapp;
        int c=0;
       
        int s=0;
        int e=0;
        int mx=0;

        while(s<fruits.size()){

            mapp[fruits[s]]++; 
            while(mapp.size()>2 && e<s){
                mapp[fruits[e]]--;
                c--;
                if(!mapp[fruits[e]]) mapp.erase(fruits[e]);
                e++;
            }
            c++;
            mx=max(mx,c);
            s++;
        }
        
        return mx;
    }
};