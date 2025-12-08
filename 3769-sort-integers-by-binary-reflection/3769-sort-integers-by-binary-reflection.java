import java.util.*;

class Solution {
    public int[] sortByReflection(int[] nums) {

        TreeMap<Integer, List<Integer>> map = new TreeMap<>();

        for (int x : nums) {
            int r = reflect(x);

            map.putIfAbsent(r, new ArrayList<>());
            map.get(r).add(x);
        }

        List<Integer> res = new ArrayList<>();

        for (int key : map.keySet()) {
            List<Integer> list = map.get(key);
            Collections.sort(list);  
            res.addAll(list);
        }

         return res.stream().mapToInt(i -> i).toArray();
    }

    private int reflect(int x) {
        int r = 0;
        while (x > 0) {
            r = (r << 1) | (x & 1);
            x >>= 1;
        }
        return r;
    }
}
