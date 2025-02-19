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
void solve(TreeNode* root,int &sum,int t){
    if(root==NULL){
        return ;
    }
    t=root->val+t*2;
    if(!root->left && !root->right){
        sum+=t;
        return;
    }
    solve(root->left,sum,t);
    solve(root->right,sum,t);

}
    int sumRootToLeaf(TreeNode* root) {
        int sum=0;
        int t=0;
        solve(root,sum,t);
        return sum;
    }
};