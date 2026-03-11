class Solution {

    boolean check(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            return false;
        return true;
    }

    public String trimTrailingVowels(String s) {

        int n = s.length();

        for(int i = n - 1; i >= 0; i--){
            if(check(s.charAt(i))){
                return s.substring(0, i + 1);
            }
        }

        return "";
    }
}