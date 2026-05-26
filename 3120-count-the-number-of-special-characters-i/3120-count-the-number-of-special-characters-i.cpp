class Solution {
public:
    int numberOfSpecialChars(string word) {

        int arr[26]={0};

        int c=0;
        for(auto ch:word){
            if(ch>='a'&& ch<='z')
            {
              arr[ch-'a']=1;
            }
           
        }

        for(auto ch:word){
            if(ch>='A' && ch<='Z' && arr[ch-'A']==1){
                c++;
                arr[ch-'A']=2;
            }
        }
        return c;
        
    }
};