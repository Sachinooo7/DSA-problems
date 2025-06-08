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
void solve(TreeNode* root,int& i,int k,int& x){
    if(root==nullptr || x!=-1) return ;

    solve(root->left,i,k,x);
    i++;
    if(i==k){
        x=root->val;
        return;
    }
    solve(root->right,i,k,x); 
}
    int kthSmallest(TreeNode* root, int k) {
        int x=-1;
        int i=0;
        solve(root,i,k,x);
        return x;
    }
};