class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {

        stack<int>s;
        int n=arr.size();
        vector<int>pre(n);

        for(int i=0;i<n;i++){

            while(!s.empty() && arr[s.top()]>arr[i]) s.pop();
            pre[i]=s.empty()?-1:s.top();
            s.push(i);

        }
        s=stack<int>();

         vector<int>next(n);

        for(int i=n-1;i>=0;i--){

            while(!s.empty() && arr[s.top()]>=arr[i]) s.pop();

            next[i]=s.empty()?n:s.top();
            s.push(i);

        }

        int sum=0;
        int mod=1e9+7;

        for(int i=0;i<n;i++){

            int t=(i-pre[i]) * (next[i]-i);
            // sum+=t*arr[i]%mod;
            sum = (sum + (t % mod) * arr[i]) % mod;


        }
        return sum;
        
    }
};