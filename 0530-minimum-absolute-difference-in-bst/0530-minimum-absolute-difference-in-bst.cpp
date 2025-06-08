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
void solve(TreeNode* root,stack<int>&s,int & mn){
    if(!root) return;
    solve(root->left,s,mn);
    if(!s.empty()){
        mn=min(mn,abs(root->val-s.top()));
    }
        s.push(root->val);
        solve(root->right,s,mn);
}
    int getMinimumDifference(TreeNode* root) {

        int mn=INT_MAX;
        stack<int>s;
        solve(root,s,mn);
        
        return mn;
    }
};