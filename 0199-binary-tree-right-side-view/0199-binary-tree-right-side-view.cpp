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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        if(!root) return v;
        queue<pair<TreeNode*,int>>q;
        map<int,int>mapp;
        q.push({root,0});

        while(!q.empty()){
            TreeNode* a;
                auto t=q.front(); q.pop();
                TreeNode* node=t.first;
                int p=t.second;
                mapp[p]=node->val;
                if(node->left) q.push({node->left,p+1});
                if(node->right) q.push({node->right,p+1});
                    }
                    for(auto a:mapp){
                        v.push_back(a.second);
                    }
        return v;
    }
};