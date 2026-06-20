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

    boolean solve(TreeNode root,long mn,long mx){
        if(root==null)return true;

        if(root.val<=mn || root.val>=mx){
            return false;
        }

         
    
        return solve(root.left,mn,root.val)&&solve(root.right,root.val,mx);
    }
    public boolean isValidBST(TreeNode root) {
      
        return solve(root,Long.MIN_VALUE,Long.MAX_VALUE);
        
    }
}