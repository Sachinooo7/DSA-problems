class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {

        int mn=Integer.MAX_VALUE;

        List<List<Integer>>res=new ArrayList<>();
        Arrays.sort(arr);
        for(int i=1;i<arr.length;i++){
            mn=Math.min(mn,arr[i]-arr[i-1]);
        }

        for(int i=1;i<arr.length;i++){
            List<Integer>list=new ArrayList<>();
            if(arr[i]-arr[i-1]==mn){
                list.add(arr[i-1]);
                list.add(arr[i]);
            res.add(list);
            }
        }

        return res;
    }
}