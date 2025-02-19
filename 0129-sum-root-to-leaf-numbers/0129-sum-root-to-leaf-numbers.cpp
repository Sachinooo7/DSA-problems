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
void solve(TreeNode* root,string str,int& sum){
    if(root==nullptr) return;

    str=str+to_string(root->val);
    if(!root->left && !root->right){
        sum+=stoi(str);
        return;
    }
    solve(root->left,str,sum);
    solve(root->right,str,sum);
}
    int sumNumbers(TreeNode* root) {
        string str;
        int sum=0;
        solve(root,str,sum);
        return sum;
    }
};