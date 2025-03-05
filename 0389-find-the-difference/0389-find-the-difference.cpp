class Solution {
public:
    char findTheDifference(string s, string t) {
int arr[26]={0};
for(auto a:s){
    arr[a-'a']++;
}
for(auto i:t){
    if(!arr[i-'a']) return i;
    arr[i-'a']--;

}
return 'e';    
    }
};