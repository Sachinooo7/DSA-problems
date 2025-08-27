class Solution {
public:
    string countAndSay(int n) {
        string str = "1";  // base case

        for(int k=1; k<n; k++){   // run n-1 times
            string temp = "";
            int i = 0;

            while(i < str.size()){
                int count = 1;
                char ch = str[i];

                // count consecutive same chars
                while(i+1 < str.size() && str[i] == str[i+1]){
                    count++;
                    i++;
                }

                temp += to_string(count) + ch; // append "count + char"
                i++;
            }
            str = temp;
        }
        return str;
    }
};
