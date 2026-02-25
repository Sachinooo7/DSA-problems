class Solution {
    public int[] sortByBits(int[] arr) {
        int n=arr.length;
        Arrays.sort(arr);
        Map<Integer,Integer>map=new HashMap<>();

            int mx=0;
        for(int i=0;i<arr.length;i++){
            int c=0;
            int a=arr[i];
            while(a>0){
                if((a&1)==1)c++;
                a=a>>1;
            }
            mx=Math.max(mx,c);
            map.put(i,c);
        }
     int res[]=new int[n];
     int j=0;
        for(int i=0;i<=mx;i++){
            for(Integer key:map.keySet()){
                if(map.get(key)==i){
                    res[j]=arr[key];
                    j++;
                }
            }
        }
        return res;

         
    }
}