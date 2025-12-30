class Solution {
    public int[] findErrorNums(int[] nums) {
        Map<Integer,Integer>map=new HashMap<>();
          int []arr=new int [2];
          map.put(0,1);
          int n=nums.length;
          int real=(n*(n+1))/2;
          int sum=0;
        for(int a:nums){
            if(map.getOrDefault(a,0)==1){
                arr[0]=a;
            }
            else {
                map.put(a,1);
                sum+=a;
                }

        }
        arr[1]=real-sum;
        return arr;
        
    }
}