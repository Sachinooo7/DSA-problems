class Solution {
    public int minScore(int n, int[][] roads) {

        List<List<int[]>>adj=new ArrayList<>();

        for(int i=0;i<=n;i++){
            adj.add(new ArrayList<>());
        }

        for(int []r:roads){
            int u=r[0];
            int v=r[1];
            int d=r[2];

            adj.get(u).add(new int[]{v,d});
            adj.get(v).add(new int[]{u,d});
        }

        boolean []vis=new boolean[n+1];
        Queue<Integer>q=new LinkedList<>();

        q.offer(1);
        vis[1]=true;

        int ans=Integer.MAX_VALUE;
        while(!q.isEmpty()){
            int node=q.poll();

            for(int []t:adj.get(node)){
                int y=t[0];
                int d=t[1];

                ans=Math.min(ans,d);

                if(!vis[y]){
                    vis[y]=true;
                    q.offer(y);
                }
            }
        }


        return ans;
    }
}