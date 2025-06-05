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
void solve(TreeNode* root,int &tot,int sum){
    if(!root) return ;
    sum=sum*10+root->val;
    if(!root->left && !root->right){
        tot+=sum;
        return;
    } 
        
    solve(root->left,tot,sum);
    solve(root->right,tot,sum);
}
    int sumNumbers(TreeNode* root) {
        int tot=0;
        int sum=0;
        solve(root,tot,sum);
        return tot;
        
    }
};