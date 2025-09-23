class Solution {
public:
    int compareVersion(string ver1, string ver2) {

        int i=0;
        int j=0;

        while(i<ver1.size() || j<ver2.size()){

            long num1=0;
            while(i<ver1.size() && ver1[i]!='.' ){
                num1=num1*10+(ver1[i]-'0');
                i++;
            }

            long num2=0;
            while( j<ver2.size() && ver2[j]!='.'){
                num2=num2*10+(ver2[j]-'0');
                j++;
            }

            if(num1>num2)return 1;
            else if(num1<num2)return -1;

            if (i < ver1.size()) i++;
            if (j < ver2.size()) j++;
        }

        return 0;
    }
};