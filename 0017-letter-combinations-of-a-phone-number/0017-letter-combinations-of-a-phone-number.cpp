class Solution {
    void solve(string digit,vector<string>&ans,string output,int index,string mapp[])
    {
        if(index>=digit.length())
        {
            ans.push_back(output);
            return;
        }

        int num=digit[index]-'0';
        string val=mapp[num];

        for(int i=0;i<val.length();i++)
        {
            output.push_back(val[i]);
            solve(digit,ans,output,index+1,mapp);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
    vector<string>ans;
    if(digits.length()==0)
    return ans;
        string output="";
        int index=0;
        string mapp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,ans,output,index,mapp);
        return ans;
        
    }
};