class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>ans;
        vector<int>mapp(10,0);
        for(int a:digits){
            mapp[a]++;
        }
        for(int i=100;i<1000;i+=2){
        bool bl=1;
            int a=i/100; int b=(i/10)%10; int c=i%10;
            vector<int>f(10,0);
            f[a]++; f[b]++; f[c]++;
            if(f[a]>mapp[a] || f[b]>mapp[b] || f[c]>mapp[c]) bl=0;
            if(bl) ans.push_back(i);
        }
        return ans;
    }
};