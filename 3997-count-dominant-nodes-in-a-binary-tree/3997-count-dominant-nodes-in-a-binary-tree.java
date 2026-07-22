class Solution {

    int count = 0;

    int solve(TreeNode root) {
        if (root == null) return 0;



        int left=solve(root.left);
        int right=solve(root.right);
        if (root.val >=Math.max(left,right)) {
            count++;
        }

        return Math.max(root.val,Math.max(left,right));
    }

    public int countDominantNodes(TreeNode root) {
        solve(root);
        return count;
    }
}