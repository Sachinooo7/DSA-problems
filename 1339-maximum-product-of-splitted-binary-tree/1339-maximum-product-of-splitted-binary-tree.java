/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {

    long tol=0;
    long mx=0;
    int MOD=1_000_000_007;

    public void calc(TreeNode root){
        if(root==null)return;
        tol+=root.val;
        calc(root.left);
        calc(root.right);
    }

    public long solve(TreeNode root){
        if(root==null){
            return 0;
        }

        long left=solve(root.left);
        long right=solve(root.right);

        long tsum=root.val+left+right;
        mx=Math.max(mx,tsum*(tol-tsum));
        return tsum;

    }
    public int maxProduct(TreeNode root) {
        
        calc(root);
        solve(root);
        return (int) (mx % MOD);

    }
}