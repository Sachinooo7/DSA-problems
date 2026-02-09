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

    void inorder(TreeNode root,List<Integer>list){
        if(root==null)return;
        inorder(root.left,list);
        list.add(root.val);
        inorder(root.right,list);
    }
 TreeNode build(int s,int l,List<Integer>list){
    if(s>l)return null;
    int m=s+(l-s)/2;
    TreeNode temp=new TreeNode(list.get(m));
    temp.left=build(s,m-1,list);
    temp.right=build(m+1,l,list);
    return temp;
 }
    public TreeNode balanceBST(TreeNode root) {

        List<Integer>list=new ArrayList<>();
        inorder(root,list);
        int n=list.size();
        return build(0,n-1,list);
        
    }
}