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
    int findBottomLeftValue(TreeNode* root) {
        
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        stack<pair<TreeNode*,int>>s;
        while(!q.empty()){
            auto t=q.front(); q.pop();
            TreeNode* n=t.first;
            int l=t.second;
            if(n->left){
                q.push({n->left,l+1});
            }
            if(n->right){
                q.push({n->right,l+1});
            }
            else if(!n->left && !n->right){
                if(s.empty()){
                    s.push({n,l});
                }
                else{
                    auto t=s.top();
                    if(l>t.second){
                        s.pop();
                        s.push({n,l});
                    }
                }
            }

        }
        auto a=s.top();
        return a.first->val;
    }
};