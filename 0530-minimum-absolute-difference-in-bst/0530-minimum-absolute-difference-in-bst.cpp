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
void solve(TreeNode* root,int&s,int & mn){
    if(!root) return;
    solve(root->left,s,mn);
    if(s!=-1){
        mn=min(mn,abs(root->val-s)); 

    }
        s=root->val;
        solve(root->right,s,mn);
}
    int getMinimumDifference(TreeNode* root) {
        int mn=INT_MAX;
        int s=-1;
        solve(root,s,mn);
        return mn;
    }
};