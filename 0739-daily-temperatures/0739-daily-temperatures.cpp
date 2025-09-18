class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        stack<int>s;
        vector<int>res(n,0);

        for(int i=0;i<n;i++){

            while(!s.empty() && temp[i]>temp[s.top()]){
                int ind=s.top(); s.pop();
                res[ind]=i-ind;
            }
            s.push(i);
        }
        return res;
    }
};