class Solution {
public:

bool check(int x,int y,vector<vector<int>>& h){
    if(x<0|| y<0||x>=h.size()||y>=h[0].size()) return 0;
    
    return 1;
}
    int minimumEffortPath(vector<vector<int>>& h) {
        
        int r=h.size();
        int c=h[0].size();
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> q;
        vector<vector<int>>vis(r,vector<int>(c,INT_MAX));
        q.push({0,{0,0}});
        vis[0][0]=0;
        vector<pair<int,int>>v={{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty()){
            auto t=q.top(); q.pop();
            int val=t.first;
            int x=t.second.first;
            int y=t.second.second;
            if(x==r-1 && y==c-1){
                return val;
            }

            for(auto a:v){
               int  n=x+a.first;
                int m=y+a.second;

               if(check(n,m,h)){
                int d=max(val,abs(h[n][m]-h[x][y]));
                if(d<vis[n][m]){
                    vis[n][m]=d;
                q.push({d,{n,m}});
                }
               } 
            }
        }
        return 0;
    }
};