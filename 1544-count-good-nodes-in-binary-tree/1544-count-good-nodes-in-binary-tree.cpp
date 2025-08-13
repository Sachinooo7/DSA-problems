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

void solve(TreeNode* root,stack<int>s,int &c){
    if(!root) return;

    if(s.top()<=root->val){
        c++;
        s.push(root->val);
    }

    solve(root->left,s,c);
    solve(root->right,s,c);
    s.pop();
}
    int goodNodes(TreeNode* root) {

        int c=0;
        stack<int>s;
        s.push(INT_MIN);
        solve(root,s,c);
        return c;

        
    }
};