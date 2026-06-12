class Solution {
    public List<String> findRepeatedDnaSequences(String s) {

        HashMap<String,Integer>map=new HashMap<>();

        List<String>res=new ArrayList<>();
        int n=s.length();
        


        int i=0;
        int j=10;
        while(j<=n){
            String t=s.substring(i,j);
            map.put(t,map.getOrDefault(t,0)+1);
            if(map.get(t)==2){
                res.add(t);
            }
            i++;
            j++;

        }
        return res;

        
    }
}