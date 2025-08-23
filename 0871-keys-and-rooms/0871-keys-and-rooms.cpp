class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
         
         int n=rooms.size();
         vector<int>vis(n,0);

         queue<int>q;
         for(auto a:rooms[0]){
            q.push(a);
         }
         vis[0]=1;

         while(!q.empty()){
            int t=q.front(); q.pop();
            vis[t]=1;


            for(auto a:rooms[t]){
            if(vis[a]) continue;
                q.push(a);
            }
         }

         for(auto a:vis){
            if(!a) return false;
         }
         return true;
    }
};