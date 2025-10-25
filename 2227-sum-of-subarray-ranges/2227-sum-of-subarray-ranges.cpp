class Solution {
public:

long long findMin(vector<int>arr){
     stack<int>s;
        int n=arr.size();
        vector<int>pre(n),next(n);

        for(int i=0;i<n;i++){

            while(!s.empty() && arr[s.top()]>arr[i]) s.pop();
            pre[i]=s.empty()?-1:s.top();
            s.push(i);

        }
        s=stack<int>();


        for(int i=n-1;i>=0;i--){

            while(!s.empty() && arr[s.top()]>=arr[i]) s.pop();

            next[i]=s.empty()?n:s.top();
            s.push(i);

        }

        long long sum=0;

        for(int i=0;i<n;i++){

            long long t=(i-pre[i]) * (next[i]-i);
            // sum+=t*arr[i]%mod;
            sum += t * arr[i];

        }
        return sum;
}

long long findMax(vector<int>arr){

     stack<int>s;
        int n=arr.size();
        vector<int>pre(n);

        for(int i=0;i<n;i++){

            while(!s.empty() && arr[s.top()]<arr[i]) s.pop();
            pre[i]=s.empty()?-1:s.top();
            s.push(i);

        }
        s=stack<int>();

         vector<int>next(n);

        for(int i=n-1;i>=0;i--){

            while(!s.empty() && arr[s.top()]<=arr[i]) s.pop();

            next[i]=s.empty()?n:s.top();
            s.push(i);

        }

        long long sum=0;

        for(int i=0;i<n;i++){

            long long t=(i-pre[i]) * (next[i]-i);
            // sum+=t*arr[i]%mod;
            sum += t * arr[i];

        }
        return sum;
}
    long long subArrayRanges(vector<int>& nums) {

        long long mn=findMin(nums);
        long long mx=findMax(nums);

        return mx-mn;
        
    }
};