class Solution {
public:
    int hIndex(vector<int>& cite) {
        int n=cite.size();
        sort(cite.begin(),cite.end());
        for(int i=0;i<n;i++){
            int h=n-i;
            if(cite[i]>=h) return h;
        }
        
        return 0;
    }
};