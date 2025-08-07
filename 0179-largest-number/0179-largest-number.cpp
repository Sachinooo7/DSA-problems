class Solution {
public:

bool solve(string &a,string& b){
    return (b+a)>(a+b);
}
    string largestNumber(vector<int>& nums) {

        vector<string>arr;

        for(auto a:nums){
            arr.push_back(to_string(a));
        }
        int n=arr.size();

        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(solve(arr[j],arr[j+1])){
                    swap(arr[j],arr[j+1]);
                }
            }
        }

        string res;

        if(arr[0]=="0")return "0";

        for(auto a:arr){
            res+=a;
        }
        return res;

    }
};