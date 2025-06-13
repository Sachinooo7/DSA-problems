class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        
        map<string,int>hash;

        for(auto a:bank){
            hash[a]=1;
        }

        queue<string>q;
        q.push(start);
        vector<char>add(4);
        add={'A','C','T','G'};

        int c=0;
        while(!q.empty()){

            int s=q.size();
            while(s--){

            string str=q.front(); q.pop();
            string temp=str;

            if(temp==end) return c;

            for(int i=0;i<8;i++){
                for(int j=0;j<4;j++){
                    temp[i]=add[j];
                    if(hash.find(temp)!=hash.end()){
                        q.push(temp);
                        hash.erase(temp);
                    }
                }
                temp=str;
            }
            }
            c++;
        }


return -1;
    }
};