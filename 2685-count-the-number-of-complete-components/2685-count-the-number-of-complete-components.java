class Solution {
    public int countCompleteComponents(int n, int[][] edges) {

        List<List<Integer>>adj=new ArrayList<>();
        for(int i=0;i<n;i++){
            adj.add(new ArrayList<>());
        }
        for(int []arr:edges){
            adj.get(arr[0]).add(arr[1]);
            adj.get(arr[1]).add(arr[0]);
        }

        int res=0;

        int []vis=new int[n];

        Queue<Integer>q=new LinkedList<>();
       

         for(int i=0;i<n;i++){
           if(vis[i]==1)continue;
           q.offer(i);
           int node=0;
           int dsum=0;
        while(!q.isEmpty()){

            int t=q.poll();
            vis[t]=1;
            node++;
            dsum+=adj.get(t).size();
            for(int a:adj.get(t)){
                if(vis[a]!=1){
                    vis[a]=1;
                    q.offer(a);
                }
            }


        }
        if(dsum==node*(node-1))res++;
         }
         return res;
        
    }
}