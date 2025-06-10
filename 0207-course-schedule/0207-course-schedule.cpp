class Solution {
public:
    bool canFinish(int num, vector<vector<int>>& pre) {

        queue<int>q;
        vector<vector<int>>adj(num);
        vector<int>ind(num);

        for(auto a:pre){
            adj[a[1]].push_back(a[0]);
            ind[a[0]]++;
        }

        for(int i=0;i<num;i++){
            if(ind[i]==0) q.push(i);
        }
int x=0;
        while(!q.empty()){
            auto t=q.front(); q.pop();
            x++;

            for(auto a:adj[t]){
                ind[a]--;
                if(ind[a]==0) q.push(a);
            }
        }
        return x==num?1:0;
    }
};