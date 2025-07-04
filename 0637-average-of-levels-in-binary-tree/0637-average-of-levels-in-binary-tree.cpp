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
    vector<double> averageOfLevels(TreeNode* root) {
       if(!root) return {};
        queue<TreeNode*>q;
        vector<double>v;
        q.push(root);
        while(!q.empty()){
            double size=q.size();
            double sum=0;
            for(double i=0;i<size;i++){
            TreeNode* node=q.front(); q.pop();
                sum+=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            v.push_back(sum/size);
        }
        return v;
        
    }
};