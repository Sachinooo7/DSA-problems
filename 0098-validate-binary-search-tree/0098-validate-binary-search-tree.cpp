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
void solve(TreeNode* root,int &prev,bool& b){
    if(!root || !b)return;
    solve(root->left,prev,b);
    if(prev!=123 && prev>=root->val){
        b=0;
        return;}
    else
    prev=root->val;

    solve(root->right,prev,b);
}
    bool isValidBST(TreeNode* root) {

        int prev=123;
        bool b=1;
        solve(root,prev,b);
        return b?true:false;
        
    }
};