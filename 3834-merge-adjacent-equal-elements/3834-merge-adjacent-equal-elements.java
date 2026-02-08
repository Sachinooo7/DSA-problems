import java.util.*;

class Solution {
    public List<Long> mergeAdjacent(int[] nums) {
        Stack<Long> st = new Stack<>();
        st.push((long) nums[0]);

        for (int i = 1; i < nums.length; i++) {
            long curr = nums[i];

            while (!st.isEmpty() && st.peek() == curr) {
                curr = st.pop() + curr;
            }
            st.push(curr);
        }

        List<Long> list = new ArrayList<>();
        while (!st.isEmpty()) {
            list.add(st.pop());
        }

        Collections.reverse(list);
        return list;
    }
}
