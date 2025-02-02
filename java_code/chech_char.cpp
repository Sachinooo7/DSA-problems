#include<bits/stdc++.h>
using namespace std;

int main(){

    string s="sFhhrgewfwe&^$ 123";
    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    int con=0;
    int vol=0;
    int digit=0;
    int spl=0;

    for(auto i:s){
        if(i==' ') continue;
        if(i>='0' && i<='9'){
            digit++;
        }
        else if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
            vol++;
        }

        else if(i>='a'&& i<='z'){
            con++;
        }
        else{
            spl++;
        }
    }
    cout<<"vol = "<<vol<<endl;
    cout<<"con = "<<con<<endl;
    cout<<"digit = "<<digit<<endl;
    cout<<"spl = "<<spl<<endl;

    }