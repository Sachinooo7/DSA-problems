class Solution {
    public List<List<Integer>> filterOccupiedIntervals(int[][] arr, int fr, int en) {
        
        int n=arr.length;
        Arrays.sort(arr,(a,b)->Integer.compare(a[0],b[0]));

        List<int[]>temp=new ArrayList<>();

        for(int []a:arr){
            if(temp.isEmpty() || temp.get(temp.size()-1)[1]+1<a[0]){
                temp.add(new int[]{a[0],a[1]});
            }
            else{
                temp.get(temp.size()-1)[1]=Math.max(temp.get(temp.size()-1)[1],a[1]);
            }
        }

        List<List<Integer>>res=new ArrayList<>();

        for(int []x:temp){
            int s=x[0];
            int e=x[1];

            if(e<fr || s>en){
                res.add(Arrays.asList(s,e));
            }
            else{
                if(s<fr){
                    res.add(Arrays.asList(s,fr-1));

                }
                if(e>en){
                    res.add(Arrays.asList(en+1,e));
                }
            }
        }
return res;
    }

}