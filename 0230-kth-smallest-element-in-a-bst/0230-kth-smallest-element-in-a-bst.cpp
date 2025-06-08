/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void solve(TreeNode* root,int &k,int &mn){
    if(!root) return;
    solve(root->left,k,mn);
    k=k-1;
    if(k==0) {
    mn=root->val;
    return;}
    solve(root->right,k,mn);
}
    int kthSmallest(TreeNode* root, int k) {
       int mn=root->val;
        solve(root,k,mn);
        return mn;
        
    }
};