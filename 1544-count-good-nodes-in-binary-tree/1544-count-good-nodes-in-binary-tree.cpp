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
    void solve(TreeNode* root, int maxVal, int &count) {
        if (!root) return;

        if (root->val >= maxVal) {
            count++;
            maxVal = root->val; // update max so far
        }

        solve(root->left, maxVal, count);
        solve(root->right, maxVal, count);
    }

    int goodNodes(TreeNode* root) {
        int count = 0;
        solve(root, INT_MIN, count);
        return count;
    }
};
